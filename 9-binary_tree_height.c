#include "binary_trees.h"
/**
 * tree_height - func. that gets the height of the tree 
 * @tree: Pointer to the tree
 * @level: level of the tree
 * @height: Pointer to height integer
 * Return: the height of the tree
 */
void tree_height(const binary_tree_t *tree, size_t level, size_t *height)
{
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
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t pichu = 0;

	if(tree == NULL)
		return (0);
	tree_height(tree, 0, &pichu);

	return (pichu);
}
