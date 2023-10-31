#include "binary_trees.h"

/**
 * binary_tree_balance - a function that measures the balance factor of a
 * binary tree
 *
 * @tree: a pointer to the root node of the tree to delete
 *
 * Return: the depth of the tree (size_t)
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	/* balance factor = left height - right height*/
	size_t left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL)
		left_height = binary_tree_height_custom(tree->left);

	if (tree->right == NULL)
		right_height = binary_tree_height_custom(tree->right);

	return (left_height - right_height);
}

/**
 * binary_tree_height_custom - a function that measures the height of a
 * binary tree
 *
 * @tree: a pointer to the root node of the tree to delete
 *
 * Return: the height of the tree (size_t)
 */
size_t binary_tree_height_custom(const binary_tree_t *tree)
{
	/*from root to leafe*/
	if (tree == NULL)
		return (0);

	size_t left_h = binary_tree_height_custom(tree->left);
	size_t right_h = binary_tree_height_custom(tree->right);

	return (1 + (left_h > right_h ? left_h : right_h));
}
