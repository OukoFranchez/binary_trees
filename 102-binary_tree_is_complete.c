#include "binary_trees.h"

/**
 * binary_tree_is_complete - checks if binary tree is complete
 * @tree: a pointer to the root node of the tree being checked
 *
 * Return: returns 1 if the tree is complete
 * and 0 if the tree is not complete
 * and 0 if tree is NULL
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t size;

	if (!tree)
	{
		return (0);
	}
	size = binary_tree_size_custom(tree);

	return (binary_tree_is_complete_helper(tree, 0, size));
}

/**
 * binary_tree_is_complete_helper - checks if binary tree is complete
 * @tree: a pointer to the root node of the tree being checked
 * @index: node index being checked
 * @size: number of nodes in the tree
 *
 * Return: returns 1 if the tree is complete
 * and 0 if the tree is not complete
 * and 0 if tree is NULL
 */
int binary_tree_is_complete_helper(const binary_tree_t *tree,
		size_t index, size_t size)
{
	if (!tree)
	{
		return (1);
	}

	if (index >= size)
	{
		return (0);
	}

	return (binary_tree_is_complete_helper(tree->left, 2 * index + 1, size) &&
		binary_tree_is_complete_helper(tree->right, 2 * index + 2, size));
}

/**
 * binary_tree_size_custom - measures size of binary tree
 * @tree: tree to measure its size
 *
 * Return: returns size of the tree
 * and 0 if tree is NULL
 */
size_t binary_tree_size_custom(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}

	return (binary_tree_size_custom(tree->left) +
			binary_tree_size_custom(tree->right) + 1);
}
