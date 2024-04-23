#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves- a function that counts the leaves in a tree.
 * @tree: pointer to the root node of the tree to count num of leaves.
 * Return: 0 if tree if NULL.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left;
	size_t right;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	left = binary_tree_leaves(tree->left);
	right = binary_tree_leaves(tree->right);
	return (left + right);
}
