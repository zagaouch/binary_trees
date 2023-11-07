#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node as the left-child
 * of another node.
 * @parent: is a pointer to the node to insert the left child
 * @value: is the value to store in the new node
 * Return: return a pointer to the created node, or Null on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);

	if (new == NULL)
		return (NULL);

	new->left = parent->left;

	if (parent->left != NULL)
		new->left->parent = new;
	parent->left = new;
	return (new);
}
