#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find the uncle
 * Return: pointer to the uncle node, otherwise NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grandparent;

	if (!node || !node->parent || !node->parent->parent)
	{
		return (NULL);
	}
	grandparent = node->parent->parent;
	if (grandparent->left == node->parent)
	{
		return (grandparent->right);
	}
	if (grandparent->right == node->parent)
	{
		return (grandparent->left);
	}
	return (NULL);
}
