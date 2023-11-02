#include "binary_trees.h"

/**
 * avl_insert - inserts a value into an AVL tree.
 * @tree: type **pointer to the root node of the AVL tree to insert into.
 * @value: value to store in the node to be inserted
 *
 * Return: inserted node, or NULL if fails.
 */
avl_t *avl_insert(avl_t **tree, int value)
{
	avl_t *new = NULL;

	if (*tree == NULL)
	{
		*tree = binary_tree_node(NULL, value);
		return (*tree);
	}

	node_value_insertion(tree, *tree, &new, value);

	return (new);
}

/**
 * node_value_insertion - node value insertion in a AVL.
 * @tree: type **pointer of root node of the AVL tree struct.
 * @parent_node: parent node of struct AVL.
 * @new: type **pointer left or right insertion.
 * @insertion_value: insertion value of the AVL.
 *
 * Return: pointer to the new root after insertion
 * and otherwise NULL
 */
avl_t *node_value_insertion(avl_t **tree, avl_t *parent_node,
		avl_t **new, int insertion_value)
{
	int b_val;

	if (*tree == NULL)
		return (*new = binary_tree_node(parent_node, insertion_value));
	if ((*tree)->n > insertion_value)
	{
		(*tree)->left = node_value_insertion(&(*tree)->left,
				*tree, new, insertion_value);
		if ((*tree)->left == NULL)
			return (NULL);
	}
	else if ((*tree)->n < insertion_value)
	{
		(*tree)->right = node_value_insertion(&(*tree)->right,
				*tree, new, insertion_value);
		if ((*tree)->right == NULL)
			return (NULL);
	}
	else
		return (*tree);
	b_val = binary_tree_balance(*tree);
	if (b_val > 1 && (*tree)->left->n > insertion_value)
	{
		*tree = binary_tree_rotate_right(*tree);
	}
	else if (b_val > 1 && (*tree)->left->n < insertion_value)
	{
		(*tree)->left = binary_tree_rotate_left((*tree)->left);
		*tree = binary_tree_rotate_right(*tree);
	}
	else if (b_val < -1 && (*tree)->right->n < insertion_value)
	{
		*tree = binary_tree_rotate_left(*tree);
	}
	else if (b_val < -1 && (*tree)->right->n > insertion_value)
	{
		(*tree)->right = binary_tree_rotate_right((*tree)->right);
		*tree = binary_tree_rotate_left(*tree);
	}
	return (*tree);
}
