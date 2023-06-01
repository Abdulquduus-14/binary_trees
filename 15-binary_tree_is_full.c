#include "binary_trees.h"
/**
 * binary_tree_is_full - a function that checks if a binary tree is full
 * @tree: a pointer to the root node of the tree to check
 *
 * Return: true on success, else tree is NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (1);
	/* checks the presence of children */
	if ((tree->left == NULL) && (tree->right == NULL))
		return (1);
	if ((tree->left) && (tree->right))
		return (1);
	return (0);
}
