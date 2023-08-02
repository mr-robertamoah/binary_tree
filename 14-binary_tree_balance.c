#include "binary_trees.h"

/**
* binary_tree_height - measures the height of a binary tree
* @tree: pointer to binary_tree_t
*
* Return: size_t
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right_h = 0, left_h = 0, to_add = 0;

	if (tree == NULL)
		return (0);

	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);

	if (tree->left || tree->right)
		to_add = 1;

	if (right_h >= left_h)
		return (to_add + right_h);
	else
		return (to_add + left_h);
}

/**
* binary_tree_balance - measures the balance factor of a binary tree
* @tree: pointer to binary_tree_t
*
* Return: int
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t right_h = 0, left_h = 0;

	if (tree == NULL)
		return (0);

	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);

	if (tree->left)
		left_h++;
	if (tree->right)
		right_h++;

	return ((int) (left_h - right_h));
}
