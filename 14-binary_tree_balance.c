#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: The root node of tree from wich we measure the height.
 * Return: If tree is NULL return 0, else return height.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t leftHeight = 0, rightHeight = 0;

		leftHeight = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		rightHeight = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((leftHeight > rightHeight) ? leftHeight : rightHeight);
	}
	return (0);
}

/**
 * binary_tree_balance - Measures balance factor for a tree.
 * @tree: The root node of the tree to measure the balance factor.
 * Return: If tree is NULL return 0, else return balance factor.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
	{
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	}

	return (0);
}
