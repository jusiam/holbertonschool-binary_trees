#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node in a binary tree.
 * @node: Pointer to the node to find the uncle of.
 *
 * Return: Pointer to the uncle node, or NULL if no uncle or if node is NULL.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{

	binary_tree_t *parent;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	parent = node->parent;

	if (parent->parent->left == NULL || parent->parent->right == NULL)
		return (NULL);

	if (parent == parent->parent->left)
		return (parent->parent->right);
	return (parent->parent->left);
}
