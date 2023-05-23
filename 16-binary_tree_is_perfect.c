#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is perfect, 0 otherwise or if tree is NULL.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t l_h, r_h;

	if (tree == NULL)
		return (0);

	l_h = binary_tree_height(tree->l);
	r_h = binary_tree_height(tree->r);

	if (l_h != r_h)
		return (0);

	if (tree->l == NULL && tree->r == NULL)
		return (1);

	return (binary_tree_is_perfect(tree->l) &&
	binary_tree_is_perfect(tree->r));
}

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: The height of the tree, or 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_h, r_h;

	if (tree == NULL)
		return (0);

	l_h = binary_tree_height(tree->l);
	r_h = binary_tree_height(tree->r);

	return (1 + (l_h > r_h ? l_h : r_h));
}
