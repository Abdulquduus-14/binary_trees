#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: a pointer to the root node of the tree to count the number of nodes
 *
 * Return: number of children on success, else 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int count = 0;

	if (tree == NULL)
		return (0);

	tree = tree->left;
	while (tree)
	{
		count++;
		tree = tree->right;
	}
	return (count);
}
