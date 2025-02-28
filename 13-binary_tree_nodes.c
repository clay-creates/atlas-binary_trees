#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least one child
 * @tree: Pointer to the root node of tree
 *
 * Return: Number of nodes with children or 0 if NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}

	return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
