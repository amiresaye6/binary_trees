#include "binary_trees.h"
#include <limits.h>
int bst_helper(const binary_tree_t *tree, int min, int max);

/**
 * binary_tree_is_bst - a function that checks if a binary tree is a valid
 * Binary Search Tree
 *
 * @tree: a pointer to the root node of the tree to check
 *
 * Return: return 1 if tree is a valid BST, and 0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/*return (bst_helper(tree, INT_MIN, INT_MAX)); is the same ase below*/
	return (bst_helper(tree, -2147483648, 2147483647));
}

/**
 * bst_helper - helper function for binary_tree_is_bst
 *
 * @tree: a pointer to the root node of the tree to check
 * @min: the minimum value a node can have
 * @max: the maximum value a node can have
 *
 * Return: return 1 if tree is a valid BST, and 0 otherwise
 */
int bst_helper(const binary_tree_t *tree, int min, int max)
{
	if (tree == NULL)
		return (1);

	if (tree->n <= min || tree->n >= max)
		return (0);

	return (bst_helper(tree->left, min, tree->n) &&
			bst_helper(tree->right, tree->n, max));
}
