#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: Height of the tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t left_height = 0, right_height = 0;

	if (tree->left != NULL)
		left_height = 1 + binary_tree_height(tree->left);
	if (tree->right != NULL)
		right_height = 1 + binary_tree_height(tree->right);

	return (left_height > right_height) ? left_height : right_height;
}

/**
 * binary_tree_is_perfect - Checks if tree is perfect
 * @tree: Pointer to root node of tree
 *
 * Return: 1 if perfect or 0 if not
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_height = 0;
	signed right_height = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left != right_height)
	{
		left_height = binary_tree_height(tree->left);
	}
	if (tree->right != NULL)
	{
		right_height = binary_tree_height(tree->right);
	}

	if (left_height != right_height)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	if (tree->left != NULL && tree->right != NULL)
	{
		return (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right));
	}

	return (0);
}
