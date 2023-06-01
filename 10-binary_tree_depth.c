#include "binary_trees.h"
/**
 * binary_tree_depth - a function that measures the depth of a
 * node in a binary tree
 *
 * @tree: a pointer to the node to measure the depth
 *
 * Return: depth of tree on success, else 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree && tree->parent)
		return (1 + binary_tree_depth(tree->parent));
}