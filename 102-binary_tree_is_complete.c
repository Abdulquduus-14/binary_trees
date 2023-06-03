#include "binary_trees.h"
/**
 * binary_tree_is_complete - checks if a binary tree is complete
 * @tree: a pointer to the root node of the tree to check
 *
 * Return: 1 on success, else 0
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_is_complete(tree->left) &&
			 binary_tree_is_complete(tree->right));
}
