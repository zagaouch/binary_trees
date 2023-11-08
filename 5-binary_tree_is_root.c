#include "binary_trees.h"
/**
 * binary_tree_is_root - check if the node is a ROOT
 * @node : the node for check
 * Return: 1,0
*/
int binary_tree_is_root(const binary_tree_t *node)
{
if (node == NULL)
return (0);
else
{
if (node->parent == NULL)
return (1);
else
return (0);
}
}
