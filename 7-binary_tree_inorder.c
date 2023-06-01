#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_inorder - access binary tree using in-order traversal
 * @tree: a pointer to the root node of the tree to traverse
 * @func: a pointer to a function to call for each node.
 *
 * Return: Nothing
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	if (tree && func)
	{
		/* binary_tree_postorder(tree->left, func);*/
		funct(tree->n);
		binary_tree_inorder(tree->left, func);
		binary_tree_inorder(tree->right, func);
	}
}
