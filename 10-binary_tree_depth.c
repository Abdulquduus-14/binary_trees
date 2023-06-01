#include "binary_trees.h"
/**
 * binary_tree_depth - function that measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, function returns 0, or size of depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);
	while (node)
	{
		depth++;
		tree = tree->left;
	}
	return (depth);
}
