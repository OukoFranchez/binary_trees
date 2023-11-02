#include "binary_trees.h"

/**
 * binary_tree_nodes - counts number of nodes with at least 1 child
 * @tree: pointer to the root node
 *
 * Return: number of nodes
 * or 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}

	if (!(tree->left) && !(tree->right))
	{
		return (0);
	}

	return (non_leaf_counter(tree) + 1);
}

/**
 * non_leaf_counter - counts nodes with at least 1 child under root node
 * @tree: pointer to the root node
 *
 * Return: total count of nodes with at least 1 child
 */
size_t non_leaf_counter(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (!tree)
	{
		return (0);
	}
	if (tree->left && (tree->left->left || tree->left->right))
	{
		left_height = non_leaf_counter(tree->left) + 1;
	}
	if (tree->right && (tree->right->left || tree->right->right))
	{
		right_height = non_leaf_counter(tree->right) + 1;
	}

	return (left_height + right_height);
}
