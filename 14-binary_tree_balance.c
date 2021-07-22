#include "binary_trees.h"
#include "9-binary_tree_height.c"
/**
 * binary_tree_balance - enitre balance of a binary tree
 * @tree: Pointer of the tree
 * Return: Size of a the tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int izq = 0;
	int der = 0;

	if (tree == NULL)
		return (0);
	izq = (int)binary_tree_height(tree->left);
	der = (int)binary_tree_height(tree->right);
	return (izq - der);

}
