#include "binary_trees.h"

/**
 * binary_tree_node - a function that creates a binary tree node
 *
 * @parent: the node's parent node (binary_tree_t)
 * @value: the value to assign to the node (int)
 *
 * Return: a pointet to the new node (biniary_tree_t) or NULL
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	node->n = value;

	return (node);
}
