#include "binary_trees.h"
/**
 * binary_tree_is_leaf - check if a tree is a leaf
 * @node : the node lool
 * Return: 1 or 0 or NULL
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
if (node == NULL)
return (0);
else
{
if (node->left == NULL && node->right == NULL)
return (1);
else
return (0);
}
}
