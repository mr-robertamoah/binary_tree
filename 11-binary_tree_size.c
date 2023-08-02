#include "binary_trees.h"

/**
* binary_tree_size - measures the size of a binary tree
* @tree: pointer to binary_tree_t
*
* Return: size_t
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t right_h = 0, left_h = 0;

	if (tree == NULL)
		return (0);

	left_h = binary_tree_size(tree->left);
	right_h = binary_tree_size(tree->right);

	return (1 + right_h + left_h);
}
