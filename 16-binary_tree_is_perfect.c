#include "binary_trees.h"

/**
 * binary_tree_is_perfect - a function that checks if a binary tree is perfect
 *
 * @tree: a pointer to the root node of the tree to check
 *
 * Return: 1 if perfect and 0 otherwise (int)
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	/*
	 * perfect tree:
	 * number of nodes = (2 ^ (height + 1)) - 1
	*/
	size_t height, number_of_nodes;

	if (tree == NULL)
		return (0);

	height = binary_tree_height(tree);
	number_of_nodes = binary_tree_nodes(tree);

	return (((int)number_of_nodes == ((1 << (height)) - 1)) ? 1 : 0);
}

/**
 * binary_tree_nodes - a function that counts the TOTAL number of nodes
 *
 * @tree: a pointer to the root node of the tree to get it's nodes
 *
 * Return: the nodes of the tree (size_t)
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
}

/**
 * binary_tree_height - a function that measures the height of a binary tree
 *
 * @tree: a pointer to the root node of the tree to get it's height
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

		return (1 + (left_h > right_h ? left_h : right_h));
	}
	return (0);
}
