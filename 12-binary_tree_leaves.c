#include "binary_trees.h"

/**
 * binary_tree_leaves - a function that counts the leaves in a binary tree
 *
 * @tree: a pointer to the root node of the tree to get is't leaves
 *
 * Return: the number of leaves of the tree (size_t)
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	/*leafe >> left and right == NULL*/
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
