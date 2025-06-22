#include "binary_trees.h"

size_t _height(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;
	
	if (!tree)
		return (0);

	left_height = _height(tree->left);
	right_height = _height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);

	else
		return (right_height + 1);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree node
 * @tree: pointer to node to measure balance factor
 * Return: balance factor, or 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return ((int)(_height(tree->left) - _height(tree->right)));
}

