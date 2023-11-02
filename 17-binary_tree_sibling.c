#include "binary_trees.h"

/**
 * binary_tree_sibling - finds a node sibling
 * @node: pointer to the node to find its sibling
 *
 * Return: pointer to the sibling node,
 * or NULL if node is NULL,parent is NULL
 * or node has no sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !(node->parent))
	{
		return (NULL);
	}
	if (node == node->parent->left)
	{
		if (node->parent->right)
		{
			return (node->parent->right);
		}
	}
	else
	{
		if (node->parent->left)
		{
			return (node->parent->left);
		}
	}

	return (NULL);
}
