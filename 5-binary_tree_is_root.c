#include "binary_trees.h"

/**
 * binary_tree_is_root - function
 * description - check the root
 *
 * @node: the root
 * Return: 1 if is root or 0 otherwise
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node != NULL && !node->parent)
	{
		return (1);
	}

	return (0);
}
