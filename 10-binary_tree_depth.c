#include "binary_trees.h"
/**
 * tree_depth - func. that gets the depth of the tree
 * @tree: Pointer to the tree
 * @level: level of the tree
 * @depth: Pointer to depth integer
 * Return: the depth of the tree
 */
void tree_depth(const binary_tree_t *tree, size_t level, size_t *depth)
{
	if (!tree || !tree->parent)
		return;

	*depth = *depth + 1;
	tree_depth(tree->parent, level + 1, depth);

}

/**
 * binary_tree_depth - func. that gets the depth of the tree
 * @tree: Pointer to the tree
 * Return: the depth of the tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t pichu = 0;

	if (tree == NULL)
		return (0);
	tree_depth(tree, 0, &pichu);
	return (pichu);
}
