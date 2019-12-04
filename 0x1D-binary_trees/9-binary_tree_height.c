#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to parent node
 * Return: Max height from left or right side
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);

	else
	{
		if (tree->left != NULL)
			left_height = binary_tree_height(tree->left) + 1;
		if (tree->right != NULL)
			right_height = binary_tree_height(tree->right) + 1;
		return (MAX(left_height, right_height));
	}
}
