#include "binary_trees.h"
/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, your function must return 0, or size of height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h, right_h;

	left_h = 0;
	right_h = 0;


	if (tree == NULL)
		return (0);

	if (tree != NULL)
	{
		if (tree->left)
			left_h = 1 + binary_tree_height(tree->left);
		else
			left_h = 0;
		if (tree->right)
			right_h = 1 + binary_tree_height(tree->right);
		else
			right_h = 0;
	}
}
