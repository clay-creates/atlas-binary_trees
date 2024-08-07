#include "binary_trees.h"

/**
 * binary_tree_size - Measure size of a binary tree
 * @tree: Pointer to root node of tree to measure
 *
 * Return: Size of the tree or 0 if not
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
