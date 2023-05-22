#include "binary_trees.h"

/**
 * binary_tree_insert_right - function
 * description - inserts a node as the right-child of another node
 *
 * @parent: the root
 * @value: the value of root
 * Return: new_node_right
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node_right = NULL;

	if (parent == NULL || value == '\0')
		return (NULL);

	new_node_right = malloc(sizeof(binary_tree_t));

	if (new_node_right == NULL)
		return (NULL);

	new_node_right->n = value;
	new_node_right->parent = parent;
	new_node_right->right = NULL;
	new_node_right->left = NULL;

	if (parent->right)
	{
		new_node_right->right = parent->right;
		new_node_right->right->parent = new_node_right;
	}
	parent->right = new_node_right;
	return (new_node_right);
}
