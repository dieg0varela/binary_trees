#include "binary_trees.h"
/**
 * tree_height - func. that gets the height of the tree
 * @tree: Pointer to the tree
 * @level: level of the tree
 * @height: Pointer to height integer
 * Return: the height of the tree
 */
void tree_height(const binary_tree_t *tree, int level, int *height)
{
	if (tree == NULL)
		return;

	if (level > *height)
	{
		*height = *height + 1;
	}
	tree_height(tree->left, level + 1, height);
	tree_height(tree->right, level + 1, height);

}

/**
 * binary_tree_height - func. that gets the height of the tree
 * @tree: Pointer to the tree
 * Return: the height of the tree
 */
int bin_tree_height(const binary_tree_t *tree)
{
	int pichu = 1;

	if (tree == NULL)
		return (0);
	tree_height(tree, 0, &pichu);

	return (pichu);
}
/**
 * binary_tree_balance - enitre balance of a binary tree
 * @tree: Pointer of the tree
 * Return: Size of a the tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int izq = 0;
	int der = 0;

	if (!tree)
		return (0);
	if (!(tree->left) && !(tree->right))
		return (0);

	izq = bin_tree_height(tree->left);
	der = bin_tree_height(tree->right);
	return (izq - der);

}
