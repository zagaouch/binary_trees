#include "binary_trees.h"
/**
 * binary_tree_delete - delet a tree
 * @tree : the tree lool
*/


void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	if (tree->left != NULL)
		binary_tree_delete(tree->left);
	if (tree->right != NULL)
		binary_tree_delete(tree->right);
	free(tree);
}
