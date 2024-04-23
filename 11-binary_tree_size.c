#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_size- a function that measures the size of a tree.
 * @tree: pointer to the root node of the tree to measure the size.
 * Return: 0 if tree if NULL.
 */


size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t r_s;
	size_t l_s;

if (tree == NULL)
{
	return (0);
}
l_s = binary_tree_size(tree->left);
r_s = binary_tree_size(tree->right);

return (l_s + r_s + 1);
}
