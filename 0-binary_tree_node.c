#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_node - function to creates a binary tree node
 * @parent : is a pointer to the parent node of the node to create
 * @value : the value to put in the new node
 * Return: the pointer or NULL
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *node = malloc(sizeof(binary_tree_t));
if (node == NULL)
return (NULL);
		node->parent = parent;
		node->left = NULL;
		node->right = NULL;
		node->n = value;
	return (node);
}
