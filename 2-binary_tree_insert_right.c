#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_right - a function that creates a binary tree node
 * @parent: a pointer to the parent node of the node to create
 * @value:  the value to put in the new node
 *
 * Return: a pointer to the new node on success, or NULL on failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = malloc(sizeof(binary_tree_t));

	if (parent == NULL)
		return (NULL);

	if (newnode == NULL)
		return (NULL);

	newnode->n = value;
	newnode->left = NULL;
	newnode->parent = parent;
	newnode->right = NULL;
	if (parent->right != NULL)
	{
		newnode->right = parent->right;
		parent->right->parent = newnode;
	}
	parent->right = newnode;

	return (newnode);
}
