#include "binary_trees.h"
#include "math.h"
#include "9-binary_tree_height.c"
#include "11-binary_tree_size.c"
/**
 * binary_tree_is_perfect - Entry point
 * @tree:Point to the tree
 * Return: 0 (not perfect) 1 (perfect)
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height = 0;
	int size = 0;

	if (!tree)
		return (0);
	height = binary_tree_height(tree) + 1;
	size = binary_tree_size(tree);
	if (pow(2, height) == size + 1)
		return (1);
	return (0);

}
