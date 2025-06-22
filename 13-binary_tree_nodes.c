#include "binary_trees.h"

/**
 * binary_tree_nodes - counts nodes with at least one child in a binary tree
 * @tree: pointer to root node of tree to count
 * Return: number of nodes with at least one child if tree is NULL, returns 0
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));

	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
