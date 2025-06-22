#include "binary_trees.h"

/**
 * binary_tree_sibling - finds sibling of given node
 * @node: pointer to node to find the sibling of given node
 * Return: pointer to the sibling node, or NULL if no sibling/invalid
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);

	else
		return (node->parent->left);
}
