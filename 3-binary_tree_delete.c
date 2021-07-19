#include "binary_trees.h"
/**
* binary_tree_delete - Delete an entire binary tree
* @tree: Pointer to the parent node
* Return: void.
*/
void binary_tree_delete(binary_tree_t *tree)
{
    binary_tree_t *fire = tree;

	if (!fire)
		return;
	if (fire->left)
        binary_tree_delete(fire->left);
    if (fire->right)
    {
        binary_tree_delete(fire->right);
    }
    free(fire);
}