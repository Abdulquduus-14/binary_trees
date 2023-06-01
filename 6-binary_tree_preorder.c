#include "binary_trees.h"
/**
 * binary_tree_preorder - access tree using pre-order traversal
 * @tree: a pointer to the root node of the tree to traverse
 * func - a pointer to a function to call for each node
 *
 * Return: nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func(tree->n));
	binary_tree_preorder(tree->left, func(tree->n);
}

/**
 * func: a pointer to a function to call for each node.
 * The value in the node must be passed as a parameter to this function.
 * @item: value of node data
 *
 * Return: nothing
 */
void (*func)(int item)
{
	printf("%d ->", item\n");
}
