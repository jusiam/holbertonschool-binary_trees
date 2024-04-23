#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes- a function that counts the nodes with at least 1 child .
 * @tree: pointer to the root node of the tree to count num of nodes.
 * Return: 0 if tree if NULL.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left;
	size_t right;

	if (tree == NULL)
	{
		return (0);
	}
	left = binary_tree_nodes(tree->left);
	right = binary_tree_nodes(tree->right);
	if (tree->left != NULL || tree->right != NULL)
	{
		return (left + right + 1);

	}
		return (left + right);
}
