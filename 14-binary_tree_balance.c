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
 * binary_tree_height - function that measures the height of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the height
 * Return: the height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (tree == NULL)
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
 * binary_tree_balance -  the balance factor
 *
 * @tree: pointer to nod
 * Return: the measure balancer factor of df
 */


int binary_tree_balance(const binary_tree_t *tree)
{
	int count_left = 0;
	int count_right = 0;

	if (tree == NULL)
		return (0);

	count_left = binary_tree_height(tree->left);
	count_right = binary_tree_height(tree->right);

	return (count_left - count_right);
}
