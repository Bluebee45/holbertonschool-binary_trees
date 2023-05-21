#include "binary_trees.h"

/**
 * binary_tree_node - function
 * description - This function  function creates a binary tree node
 *
 * @parent: this is the root
 * @value: This is the value the roor
 * Return: new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *create_node = malloc(sizeof(binary_tree_t));

	if (!create_node)
	{
		return (NULL);
	}
	create_node->parent = parent;
	create_node->n = value;
	create_node->left = NULL;
	create_node->right = NULL;
	return (create_node);
}
