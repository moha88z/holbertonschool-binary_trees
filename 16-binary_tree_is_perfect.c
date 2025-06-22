#include "binary_trees.h"

/**
 * perfect_helper - recursively checks if a binary tree is perfect
 * @tree: pointer to current node in the binary tree
 * @depth: total depth/height of tree
 * @level: current level of node being checked
 * Return: 1 if the subtree rooted is perfect, 0 otherwise
 */

int perfect_helper(const binary_tree_t *tree, size_t depth, size_t level)
{
	if (!tree)
		return (1);

	if (!tree->left && !tree->right)
		return ((depth == level + 1));

	if (!tree->left || !tree->right)
		return (0);

	return (perfect_helper(tree->left, depth, level + 1) &&
		perfect_helper(tree->right, depth, level + 1));
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to root node of tree to check
 * Return: 1 if perfect, 0 if not or if tree is NULL
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t depth = binary_tree_height(tree);

	if (!tree)
		return (0);

	return (perfect_helper(tree, depth, 0));
}
