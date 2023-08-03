#include "binary_trees.h"

/**
* binary_tree_ancestor - finds the lowest common
* ancestor of two nodes
* @first: pointer to binary_tree_t
* @second: pointer to binary_tree_t
*
* Return: binary_tree_t *
*/
binary_tree_t *binary_trees_ancestor(
	const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *tmp;

	if (!first || !first->parent || !second || !second->parent)
		return (NULL);

	while (first)
	{
		tmp = (binary_tree_t *) second;
		while (tmp)
		{
			if (first == tmp)
				return ((binary_tree_t *) first);

			tmp = tmp->parent;
		}

		first = first->parent;
	}

	return (NULL);
}
