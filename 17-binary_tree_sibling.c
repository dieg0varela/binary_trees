#include "binary_trees.h"
/**
 * binary_tree_sibling - Entry point
 * @node: Pointer to the node to find the sibling
 * Return: Pointer to sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	int bimbo = 0;

	if (!node)
		return (NULL);
	if (!(node->parent))
		return (NULL);
	if ((node->parent)->left && (node->parent)->right)
	{
		bimbo = node->n;
		if ((node->parent->left)->n == bimbo)
			return (node->parent->right);
		else
			return (node->parent->left);
	}
	return (NULL);
}
