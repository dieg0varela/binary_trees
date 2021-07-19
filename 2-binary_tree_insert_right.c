#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
* binary_tree_insert_right - Entry point
* @parent: Pointer to the parent node
* @value: Value of the new node
*
* Description: Insert a new node to the right of the parent
* Return: Return pointer to new_node or NULL on fail
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (!parent)
		return (NULL);
	if (!new_node)
		return (NULL);

	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->parent = parent;
	if (parent->right)
	{
		new_node->right = parent->right;
		(parent->right)->parent = new_node;
	}
	parent->right = new_node;
	return (new_node);
}