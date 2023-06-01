#include "binary_trees.h"
/**
 * binary_tree_sibling - a function that finds the sibling of a node
 * @node: a pointer to the node to find the sibling
 *
 * Return: a pointer to the sibling node on success, else NULL
 */
size_t binary_tree_sibling(const binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);

	node = node->left;
	while (node)
	{
		if (node->parent->left == node->parent->right)
			return (node->parent);
		node = node->right;
	}
}
