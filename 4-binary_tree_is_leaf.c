#include "binary_trees.h"

/**
 * binary_tree_is_leaf - function
 * description - check the leaf
 *
 * @node: passed parent
 * Return: 1 if is leafe 0 otherwise
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
	{
		return (0);
	}

	if (node != NULL && !node->left && !node->right)
	{
		return (1);
	}

	return (0);
}
