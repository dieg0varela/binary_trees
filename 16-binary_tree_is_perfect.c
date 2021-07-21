#include "binary_trees.h"
#include "15-binary_tree_is_full.c"
#include "14-binary_tree_balance.c"
/**
 * binary_tree_is_perfect - Entry point
 * @tree:Point to the tree
 * Return: 0 (not perfect) 1 (perfect)
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	 int balance = 0;
	 int full = 0;

	if (!tree)
		return (0);

	balance = binary_tree_balance(tree);
	full = binary_tree_is_full(tree);
	if (balance == 0 && full == 1)
		return (1);
	return (0);

}
