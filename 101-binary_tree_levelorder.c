#include "binary_trees.h"
void binary_tree_level(
	const binary_tree_t *tree, size_t height, void (*func)(int)

	);

/**
 * binary_tree_levelorder - a function that goes through a binary tree using
 * level-order traversal
 *
 * @tree: a pointer to the root node of the tree to traverse
 * (const binary_tree_t)
 * @func:  a pointer to a function to call for each node. The value in the
 * node must be passed as a parameter to this function.
 *
 * Return: (void)
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t height, i;

	if (tree == NULL || func == NULL)
		return;

	height = binary_tree_height(tree);
	for (i = 1; i <= height; i++)
		binary_tree_level(tree, i, func);
}
/**
 * binary_tree_level - a function that process func level by level
 *
 * @tree: a pointer to the root node of the tree to get is't leaves
 * @func:  a pointer to a function to call for each node. The value in the
 * node must be passed as a parameter to this function.
 * @height: the height of the tree (size_t)
 *
 * Return: (void)
*/
void binary_tree_level(
	const binary_tree_t *tree, size_t height, void (*func)(int)

	)
{
	if (tree == NULL || func == NULL || height < 1)
		return;

	if (height == 1)
		func(tree->n);

	else if (height > 1)
	{
		binary_tree_level(tree->left, height - 1, func);
		binary_tree_level(tree->right, height - 1, func);
	}
}
/**
 * binary_tree_height - a function that measures the height of a binary tree
 *
 * @tree: a pointer to the root node of the tree to get its height
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
