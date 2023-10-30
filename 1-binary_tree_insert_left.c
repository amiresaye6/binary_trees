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

	left_node = binary_tree_node(parent, value);

	if (parent == NULL || left_node == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		left_node->left = parent->left;
		parent->left->parent = left_node;
	}

	parent->left = left_node;

	return (left_node);
}
