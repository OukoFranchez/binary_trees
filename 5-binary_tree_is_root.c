#include "binary_trees.h"

/**
 * binary_tree_is_root - check whether node is a root node
 *
 * @node: pointer to the node being  checked
 *
 * Return: 1 if node is a root node,
 * or 0 if node is it isn't or is NULL
 *
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
	{
		return (0);
	}

	return (!(node->parent));
}
