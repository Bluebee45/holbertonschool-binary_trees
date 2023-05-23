#include "binary_trees.h"

/**
 * description - post-order traversal
 *
 * @tree: the root
 * @func: the ponter to function pass n
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
	{
		return;
	}

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
