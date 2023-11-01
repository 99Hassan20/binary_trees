#include "binary_trees.h"

/**
 * @binary_tree_insert_right -  a function that inserts a node as the right-child of another node
 * 
 * @parent: pointer to the node to insert the right-child in
 * @value: the value to store in the new node
 * Return a pointer to the created node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *new;
    binary_tree_t *tmp;

    if (!parent)
        return (NULL);
    new = binary_tree_node(parent, value);
    if (!new)
        return (NULL);
    if (!parent->right)
        parent->right = new;
    else
    {
        tmp = parent->right;
        parent->right = new;
        new->right = tmp;
    }
    return (new);
}
