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

	{
		left_h = binary_tree_height(tree->left);
		right_h = binary_tree_height(tree->right);

		if (left_h > right_h)
			return (left_h + 1);
		else
			return (right_h + 1);
	}
}
