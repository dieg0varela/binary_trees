#include "binary_trees.h"

/**
 * is_full - Entry point
 * @tree:Point to the tree
 * Return: 0 (not full) 1 (full)
 */
int is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);

	if ((tree->left) && (tree->right))
		return (is_full(tree->left) && is_full(tree->right));

	return (0);
}

/**
 * binary_tree_is_full - Entry point
 * @tree:Point to the tree
 * Return: 0 (not full) 1 (full)
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	return (is_full(tree));
}
