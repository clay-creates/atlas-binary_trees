#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 * @parent: Pointer to the node to insert child in
 * @value: Value to store
 *
 * Return: Pointer to the new node or NULL on fail
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    if (parent == NULL)
    {
        return (NULL);
    }

    binary_tree_t *new_node = binary_tree_node(parent, value);
    if (new_node == NULL)
    {
        return (NULL);
    }

    if (parent->right != NULL)
    {
        new_node->right = parent->right;
        parent->right->parent = new_node;
    }
    parent->right = new_node;

    return (new_node);
}
