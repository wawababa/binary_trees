#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_node - creates new parent node
 * @parent: parent of the tree
 * @value: value to be assigned in binary tree
 * Return: Null if its fail otherwise new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *new_parent = malloc(sizeof(binary_tree_t));
if (new_parent == NULL)
{
return (NULL);
}
new_parent->left = NULL;
new_parent->right = NULL;
new_parent->n = value;
new_parent->parent = parent;
return (new_parent);
}
