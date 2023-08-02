#include "binary_trees.h"

/**
* binary_tree_delete - deletes an entire binary tree
* @tree: pointer to binary_tree_s
*/
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	if (tree->left)
		binary_tree_delete(tree->left);

	if (tree->right)
		binary_tree_delete(tree->right);

	if (tree->parent)
		tree->parent = NULL;

	free(tree);
}
