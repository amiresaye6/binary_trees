#include "binary_trees.h"

/**
 * binary_tree_height - a function that measures the height of a binary tree
 *
 * @tree: a pointer to the root node of the tree to delete
 *
 * Return: the height of the tree (size_t)
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	/*from root to leafe*/
	if (tree != NULL)
	{
		size_t left_h = 0, right_h = 0;

		left_h = tree->left? binary_tree_height(tree->left) + 1: 0;
		right_h = tree->right? binary_tree_height(tree->right) + 1: 0;

		return ((left_h > right_h? left_h: right_h));
	}
	return (0);
}
