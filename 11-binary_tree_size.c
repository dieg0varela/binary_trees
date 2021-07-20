#include "binary_trees.h"

/**
 * tree_size - func. that gets the size of the tree
 * @tree: Pointer to the tree
 * @size: Pointer to size integer
 * Return: the size of the tree
 */
void tree_size(const binary_tree_t *tree, size_t *size)
{
	if (!tree)
		return;

	*size = *size + 1;
	tree_size(tree->left, size);
	tree_size(tree->right, size);

}

/**
 * binary_tree_size - enitre size of a binary tree
 * @tree: Pointer of the tree
 * Return: Size of a the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t pichu = 0;

	if (tree == NULL)
		return (0);
	tree_size(tree, &pichu);
	return (pichu);

}
