#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_depth- a function that measures the depth of a node.
 * @tree: pointer to the node to measure the depth.
 * Return: 0 if tree if NULL.
 */


size_t binary_tree_depth(const binary_tree_t *tree)
{
	int depth = 0;

if (tree == NULL)
{
	return (0);
}
while (tree->parent != NULL)
{
	depth++;
	tree = tree->parent;
}
return (depth);
}
