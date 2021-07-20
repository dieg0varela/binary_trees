#include "binary_trees.h"

/**
 * nodes_count - func. that count the nodes of the tree
 * @tree: Pointer to the tree
 * @nodes: Pointer to size integer
 * Return: the size of the tree
 */
void nodes_count(const binary_tree_t *tree, size_t *nodes)
{
	if (!tree)
		return;

	if (tree->left || tree->right)
		*nodes = *nodes + 1;
	nodes_count(tree->left, nodes);
	nodes_count(tree->right, nodes);

}

/**
 * binary_tree_nodes - enitre nodes of a binary tree
 * @tree: Pointer of the tree
 * Return: Size of a the tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t pichu = 0;

	if (tree == NULL)
		return (0);
	nodes_count(tree, &pichu);
	return (pichu);

}
