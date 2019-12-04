#include "binary_trees.h"

/**
 * binary_tree_is_full - function that checks if a binary tree is full
 * @tree: pointer to parent node
 * Return: Max depth from left or right side
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if ((tree->left == NULL) && (tree->right == NULL))
		return (1);

	if ((tree->left != NULL) && (tree->right != NULL))
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));

	else
		return (0);
}
