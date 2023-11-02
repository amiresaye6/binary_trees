#include "binary_trees.h"

/**
 * binary_tree_rotate_left - a function that performs a left-rotation on
 * a binary tree
 *
 * @tree: a pointer to the root node of the tree to rotate
 *
 * Return: a pointer to the new root node of the tree once rotated
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *temp = NULL;

	if (tree == NULL)
		return (NULL);

	if (tree->left == NULL && tree->right == NULL)
		return (tree);

	if (tree->right != NULL)
	{
		temp = tree->right;
		temp->parent = tree->parent;
		tree->parent = tree->right;
		tree->right = temp->left;

		if (tree->right != NULL)
			tree->right->parent = tree;

		temp->left = tree;
	}
	free(temp);
	if (tree->parent != NULL)
		return (tree->parent);

	return (tree);
}
