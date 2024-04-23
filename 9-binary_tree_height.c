#include "binary_trees.h"

/**
 *binary_tree_height - measures the height of a binary tree
 *@tree: entry pointer
 *Return: height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t hl, hr;

	if ((!tree) || (!tree->left && !tree->right))
		return (0);
	if (tree->left)
	hl = binary_tree_height(tree->left) + 1;

	if (tree->right)
	hr = binary_tree_height(tree->right) + 1;

	if (hl > hr)
		return (hl);
	else
		return (hr);
}
