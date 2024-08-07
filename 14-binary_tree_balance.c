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
 * binary_tree_balance - Measures balance of binary tree
 * @tree: Pointer to root node of tree
 *
 * Return: Balance factor or 0 if NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	int left_height = tree->left ? (int)binary_tree_height(tree->left) + 1 : 0;
	int right_height = tree->right ? (int)binary_tree_height(tree->right) + 1 : 0;

	return (left_height - right_height);
}
