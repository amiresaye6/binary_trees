#include "binary_trees.h"

/**
 * binary_tree_depth - a function that measures the depth of a node in
 * a binary tree
 *
 * @tree: a pointer to the root node of the tree to get its depth
 *
 * Return: the depth of the tree (size_t)
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent)
	{
		tree = tree->parent;
		depth++;
	}
	return (depth);
}
