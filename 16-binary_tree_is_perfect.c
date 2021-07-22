#include "binary_trees.h"
#include "9-binary_tree_height.c"
#include "11-binary_tree_size.c"
/**
 * power - Entry point
 * @value: Value to elevate
 * @times: Exponent
 * Return: power of the number
 */
int power(int value, int times)
{
	int res = 1;
	int pichu = 0;

	for (pichu = 0 ; pichu < times ; pichu++)
		res = res * value;
	return (res);
}
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
	if (power(2, height) == size + 1)
		return (1);
	return (0);

}
