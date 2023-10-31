#include "binary_trees.h"

/**
 * binary_tree_size - a function that measures the size of a binary tree
 *
 * @tree: a pointer to the root node of the tree to get it's size
 *
 * Return: the size of the tree (size_t)
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t total_left = 0, total_right = 0;

	if (tree == NULL)
		return (0);

	if (tree != NULL)
	{
		if (tree->left != NULL)
			total_left = binary_tree_size(tree->left);
		if (tree->right != NULL)
			total_right = binary_tree_size(tree->right);
	}
	return (total_left + total_right + 1);
}
