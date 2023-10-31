#include "binary_trees.h"

/**
 * binary_tree_insert_left - a function that inserts a node as the
 * left-child of another node
 *
 * @parent: the node's parent node (binary_tree_t)
 * @value: the value to assign to the node (int)
 *
 * Return: a pointet to the new left node (biniary_tree_t) or NULL
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_node;

	if (parent == NULL)
		return (NULL);

	left_node = malloc(sizeof(binary_tree_t));
	if (left_node == NULL)
		return (NULL);

	left_node->left = NULL;
	left_node->right = NULL;
	left_node->n = value;
	if (parent->left != NULL)
	{
		left_node->left = parent->left;
		parent->left->parent = left_node;
	}
	left_node->parent = parent;


	parent->left = left_node;

	return (left_node);
}
