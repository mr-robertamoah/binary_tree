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
* binary_tree_same_height - check if height is same for both subtrees
* @tree: pointer to binary_tree_t
*
* Return: size_t
*/
size_t binary_tree_same_height(const binary_tree_t *tree)
{
	size_t right_h = 0, left_h = 0;

	if (tree == NULL)
		return (0);

	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);

	if (right_h == left_h)
		return (1);

	return (0);
}

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
* binary_tree_is_perfect - checks if a binary tree is perfect
* @tree: pointer to binary_tree_t
*
* Return: int
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t yes = 0, same = 0;

	if (tree == NULL)
		return (0);

	yes = binary_tree_zero_two_node(tree);
	same = binary_tree_same_height(tree);

	printf("%ld   %ld\n", yes, same);
	return (yes && same ? 1 : 0);
}
