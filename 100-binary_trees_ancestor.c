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
	const binary_tree_t *first_ptr = first, *second_ptr = second;

	while (first_ptr != NULL)
	{
		second_ptr = second;
		while (second_ptr != NULL)
		{
			if (first_ptr == second_ptr)
				return ((binary_tree_t *)first_ptr);
			second_ptr = second_ptr->parent;
		}
		first_ptr = first_ptr->parent;
	}

	return (NULL);
}
