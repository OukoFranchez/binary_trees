#include "binary_trees.h"

/**
 * binary_tree_delete - deletes entire binary tree
 *
 * @tree: pointer to the root of the tree
 *
 * Description: if tree is NULL, do nothing
 * else delete the whole tree
 *
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
	{
		return;
	}
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
