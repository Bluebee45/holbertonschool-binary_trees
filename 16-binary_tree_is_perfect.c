#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check the leaf
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

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node
 *
 * Return: height of the binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (tree == NULL || binary_tree_is_leaf(tree) == 1)
	{
		return (0);
	}
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	if (left < right)
	{
		return (1 + right);
	}
	return (1 + left);
}

/**
 * binary_tree_is_perfect - checks if is perfect
 *
 * @tree: pointer to root
 * Return: int
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	binary_tree_t *left, *right;

	if (tree == NULL)
		return (0);

	left = tree->left;
	right = tree->right;

	if (binary_tree_is_leaf(tree))
	{
		return (1);
	}
	if ((left == NULL) || (right == NULL))
	{
		return (0);
	}
	if (binary_tree_height(left) == binary_tree_height(right))
	{
		if (binary_tree_is_perfect(left) && binary_tree_is_perfect(right))
		{
			return (1);
		}
	}
	return (0);
}
