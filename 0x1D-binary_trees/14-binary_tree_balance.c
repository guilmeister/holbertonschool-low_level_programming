#include "binary_trees.h"

/**
 * binary_tree_balance - function that measures the
 * balance factor of a binary tree
 * @tree: pointer to parent node
 * Return: Difference of left and right side
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_side = 0, right_side = 0;

	if (tree->left != NULL)
		left_side = binary_tree_balance(tree->left) + 1;
	if (tree->right != NULL)
		right_side = binary_tree_balance(tree->right) + 1;
	return (left_side - right_side);
}
