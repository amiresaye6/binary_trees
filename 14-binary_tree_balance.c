#include "binary_trees.h"

/**
 * binary_tree_balance - a function that measures the balance factor of a binary tree
 *
 * @tree: a pointer to the root node of the tree to delete
 *
 * Return: the depth of the tree (size_t)
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	/*left height - right height*/
	if (tree != NULL)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	return (0);
}


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

		if (tree->left)
			left_h = binary_tree_height(tree->left);

		if (tree->right)
			right_h = binary_tree_height(tree->right);

		return (1 + (left_h > right_h? left_h: right_h));
	}
	return (0);
}
