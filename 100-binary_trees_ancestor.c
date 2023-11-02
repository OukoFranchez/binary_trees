#include "binary_trees.h"

/**
 * binary_trees_ancestor - find the lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 *
 * Return: pointer to the ancestor node, or NULL if it can't be found
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
					const binary_tree_t *second)
{
	binary_tree_t *first_t, *second_t, *second_tt;

	if (!first || !second)
	{
		return (NULL);
	}

	first_t = (binary_tree_t *)first;
	second_t = (binary_tree_t *)second;

	while (first_t)
	{
		second_tt = second_t;
		while (second_t)
		{
			if (first_t == second_t)
			{
				return (first_t);
			}
			second_t = second_t->parent;
		}
		first_t = first_t->parent;
		second_t = second_tt->parent;
	}

	return (NULL);
}
