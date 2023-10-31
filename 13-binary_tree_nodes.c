#include "binary_trees.h"

/**
 * binary_tree_nodes - a function that counts the nodes with at least 1 child
 * in a binary tree
 *
 * @tree: a pointer to the root node of the tree to get is's nodes
 *
 * Return: the nodes of the tree (size_t)
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
}
