#include "binary_trees.h"

/**
 * leaves_count - func. that count the leaves of the tree
 * @tree: Pointer to the tree
 * @leaves: Pointer to size integer
 * Return: the size of the tree
 */
void leaves_count(const binary_tree_t *tree, size_t *leaves)
{
	if (!tree)
		return;

	if (!tree->left && !tree->right)
		*leaves = *leaves + 1;
	leaves_count(tree->left, leaves);
	leaves_count(tree->right, leaves);

}

/**
 * binary_tree_leaves - enitre leaves of a binary tree
 * @tree: Pointer of the tree
 * Return: Size of a the tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t pichu = 0;

	if (tree == NULL)
		return (0);
	leaves_count(tree, &pichu);
	return (pichu);

}
