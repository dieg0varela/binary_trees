#include "binary_trees.h"

/**
 * count_left - func. that count the balance of the left tree
 * @tree: Pointer to the tree
 * @izq: Pointer to count of the left nodes
 * Return: the size of the tree
 */
void count_left(const binary_tree_t *tree, int *izq)
{
	if (!tree)
		return;

	count_left(tree->left, izq);
	*izq = *izq + 1;

}
/**
 * count_right - func. that count the right nodes of the tree
 * @tree: Pointer to the tree
 * @der: Pointer to right count integer
 * Return: the size of the tree
 */
void count_right(const binary_tree_t *tree, int *der)
{
	if (!tree)
		return;

	count_right(tree->right, der);
	*der = *der + 1;

}

/**
 * binary_tree_balance - enitre balance of a binary tree
 * @tree: Pointer of the tree
 * Return: Size of a the tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int izq = 0;
	int der = 0;

	if (tree == NULL)
		return (0);
	count_left(tree, &izq);
	count_right(tree, &der);
	return (izq - der);

}
