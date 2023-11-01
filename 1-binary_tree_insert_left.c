#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node to the left
 * 
 * @parent: parent 
 * @value: value 
 * Return: binary_tree_t* 
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *new;
    binary_tree_t *tmp;

    if (!parent)
        return (NULL);
    new = binary_tree_node(parent, value);
    if (!new)
        return (NULL);
    if (!parent->left)
        parent->left = new;
    else
    {
        tmp = parent->left;
        parent->left = new;
        new->left = tmp;
    }
    return (new);
}
