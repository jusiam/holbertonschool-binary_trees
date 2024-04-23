#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_preorder- a function that checks if a node is a root.
 * @tree: Pointer to the node to check.
 * @func: a pointer to a function to call for each node.
 * Return: 1 if node is a root, otherwise 0.
 */


void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree != NULL && func != NULL)
{
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
}
