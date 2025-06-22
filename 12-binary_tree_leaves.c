#include "binary_trees.h"

/**
 * binary_tree_leaves - counts number of leaves in a binary tree
 * @tree: pointer to root node of tree to count leaves
 * Return: number of leaf nodes. if tree is NULL, return 0
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
