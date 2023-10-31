#include "binary_trees.h"

/**
 * binary_tree_is_full - a function that checks if a binary tree is full
 *
 * @tree: a pointer to the root node of the tree to delete
 *
 * Return: the depth of the tree (size_t)
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	else if ((tree->left != NULL && tree->right != NULL))
	{
		return (
			binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right)
			);
	}

	return (0);
}
