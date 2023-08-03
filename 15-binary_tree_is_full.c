#include "binary_trees.h"

/**
* binary_tree_zero_two_node - check if node has two or zero children
* @tree: pointer to binary_tree_t
*
* Return: size_t
*/
size_t binary_tree_zero_two_node(const binary_tree_t *tree)
{
	size_t right_h = 0, left_h = 0, yes = 0;

	if (tree == NULL)
		return (1);

	left_h = binary_tree_zero_two_node(tree->left);
	right_h = binary_tree_zero_two_node(tree->right);

	if ((tree->left && tree->right) || (!tree->left && !tree->right))
		yes = 1;

	return (yes *  left_h * right_h);
}

/**
* binary_tree_is_full - checks if a binary tree is full
* @tree: pointer to binary_tree_t
*
* Return: int
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return ((int) binary_tree_zero_two_node(tree));
}
