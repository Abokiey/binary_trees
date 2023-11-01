#include "binary_trees.h"

/**
 * binary_tree_leaves - count the leaves of a tree
 * @tree: pointer to the root node of tthe tree
 * Return: number of leaves
 *
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0, left, right;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);


	left = binary_tree_leaves(tree->left);
	right = binary_tree_leaves(tree->right);

	count = left + right;
	return (count);

}
