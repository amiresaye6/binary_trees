#include "binary_trees.h"

/**
 * binary_tree_inorder - a function that goes through a binary tree using
 * in-order traversal
 *
 * @tree: a pointer to the root node of the tree to traverse
 * @func: a pointer to a function to call for each node. The value in the node
 * must be passed as a parameter to this function.
 *
 * Return: (void)
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	/*inorder: left > root > right*/
	if (tree == NULL || func == NULL)
		return;

	if (tree->left != NULL)
		binary_tree_inorder(tree->left, func);

	func(tree->n);

	if (tree->right != NULL)
		binary_tree_inorder(tree->right, func);
}
