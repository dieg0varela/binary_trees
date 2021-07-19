#include "binary_trees.h"
/**
* binary_tree_preorder - function that goes through a binary tree using pre-order traversal
* @tree: Pointer to the parent node
* @func: Pointer to a function to call for each node
* Return: void.
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	if (tree->left)
		binary_tree_preorder(tree->left, func);
	if (tree->right)
		binary_tree_preorder(tree->right, func);
	func(tree->n);
}
