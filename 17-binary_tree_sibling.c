#include "binary_trees.h"

/**
 * binary_tree_sibling - a function that finds the sibling of a node
 *
 * @node: a pointer to the node to find the sibling
 *
 * Return: pointer to the sibling node or NULL (binary_tree_t)
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == NULL || node->parent->right == NULL)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);

	if (node->parent->right == node)
		return (node->parent->left);

	return (NULL);
}
