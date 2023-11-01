#include "binary_trees.h"

/**
 * binary_tree_is_complete - Checks if a binary tree is complete.
 *
 * @tree: Pointer to the root node of the tree.
 *
 * Return: 1 if the tree is complete, 0 otherwise.
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	const binary_tree_t **queue = malloc(sizeof(binary_tree_t *) * 10000);
	int front = 0, rear = -1;
	int hasNullChild = 0;

	queue[++rear] = tree;

	while (front <= rear)
	{
		const binary_tree_t *node = queue[front++];

		if (node->left)
		{
			if (hasNullChild)
			{
				free(queue);
				return (0);
			}
			queue[++rear] = node->left;
		}
		else
			hasNullChild = 1;

		if (node->right)
		{
			if (hasNullChild)
			{
				free(queue);
				return (0);
			}
			queue[++rear] = node->right;
		}
		else
			hasNullChild = 1;
	}

	free(queue);
	return (1);
}
