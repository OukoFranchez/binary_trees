#include "binary_trees.h"

/**
 * binary_tree_is_full - check if a binary tree is full
 *
 * @tree: pointer to the root of the binary tree
 *
 * Return: 1 if full, 0 if not
 * or if tree is NULL
 *
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_state = 0;
	int right_state = 0;

	if (!tree)
	{
		return (0);
	}
	if (!(tree->left) && !(tree->right))
	{
		return (1);
	}
	if (tree->left && tree->right)
	{
		left_state = binary_tree_is_full(tree->left);
		right_state = binary_tree_is_full(tree->right);
	}

	return (left_state && right_state);
}
