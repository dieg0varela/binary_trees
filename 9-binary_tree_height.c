#include "binary_trees.h"
/**
 * binary_tree_height - func. that gets the height of the tree 
 * @tree: Pointer to the tree
 * Return: the height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_side;
	size_t right_side;
	
	if(tree == NULL)
		return (0);
	else
	{
		left_side = binary_tree_height(tree->left);
		right_side = binary_tree_height(tree->right);
		if(left_side > right_side)
			return left_side + 1;
		else
			return right_side + 1;
	}
}
