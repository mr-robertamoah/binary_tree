#include "binary_trees.h"

/**
* binary_tree_insert_left - inserts a node as the left-child
* of another node
* @parent: pointer to binary_tree_s
* @value: int
*
* Return: binary_tree_t *
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = binary_tree_node(parent, value);

	if (parent->left)
	{
		node->left = parent->left;
		parent->left->parent = node;
	}

	parent->left = node;

	return (node);
}
