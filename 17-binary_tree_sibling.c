#include "binary_trees.h"

/**
 * binary_tree_sibling - Find sibling of node
 * @node: Pointer to node to find sibling of
 *
 * Return: Pointer to sibling node or NULL otherwise
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	if (node == node->parent->left)
	{
		return (node->parent->right);
	}
	else
	{
		return (node->parent->left);
	}
}
