#include "binary_trees.h"

/**
 * binary_tree_insert_right - a function that inserts a node as the
 * right-child of another node
 *
 * @parent: the node's parent node (binary_tree_t)
 * @value: the value to assign to the node (int)
 *
 * Return: a pointet to the new left node (biniary_tree_t) or NULL
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_node;

	right_node = binary_tree_node(parent, value);

	if (parent == NULL || right_node == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		right_node->right = parent->right;
		parent->right->parent = right_node;
	}

	parent->right = right_node;

	return (right_node);
}
