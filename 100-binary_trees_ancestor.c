#include "binary_trees.h"

/**
 * binary_trees_ancestor - a function that finds the lowest common ancestor
 * of two nodes
 *
 * @first: a pointer to the first node (const binary_tree_t)
 * @second:  a pointer to the second node (const binary_tree_t)
 *
 * Return: return a pointer to the lowest common ancestor node of the two
 * given nodes (binary_tree_t)
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
	const binary_tree_t *second)
{
	size_t left_depth, right_depth, parent_node_pos;
	binary_tree_t *temp;
	size_t i;

	if (first == NULL || second == NULL)
		return (NULL);

	if (first->parent != NULL && first->parent == second)
		return ((binary_tree_t *)second);

	if (first->parent != NULL && second->parent == first)
		return ((binary_tree_t *)first);

	if (first == second && first->parent != NULL)
		return ((binary_tree_t *)first->parent);

	left_depth = binary_tree_depth(first);
	right_depth = binary_tree_depth(second);

	parent_node_pos = (left_depth > right_depth ?
		(left_depth - right_depth +1) : (right_depth - left_depth +1));

	temp = (left_depth > right_depth ? (binary_tree_t *)first : (binary_tree_t *)second);
	for (i = 0; i < parent_node_pos; i++)
		temp = temp->parent;

	return (temp);
}
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
