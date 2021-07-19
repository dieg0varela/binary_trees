#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
* binary_tree_insert_left - Entry point
* @parent: Pointer to the parent node
* @value: Value of the new node
*
* Description: Insert a new node to the left of the parent
*
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
	int val = 0;

	if (!parent)
		return (NULL);
	if (!new_node)
		return (NULL);
	if (parent->left)
	{
		val = parent->left->n;
		parent->left = NULL;
		binary_tree_insert_left(parent, value);
		binary_tree_insert_left(parent->left, val);
	}
	else
	{
		new_node->n = value;
		new_node->left = NULL;
		new_node->right = NULL;
		new_node->parent = parent;
		parent->left = new_node;
	}
	return (new_node);
}
