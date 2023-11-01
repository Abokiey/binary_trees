#include "binary_trees.h"

/**
 * binary_tree_height - depth of the node
 * @tree: pointer to the node to measure depth
 * Return: size of the depth
 *
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (0);

	if (tree->right)
		right = 1 + binary_tree_height(tree->right);
	if (tree->left)
		left = 1 + binary_tree_height(tree->left);
	if (left > right)
		return (left);
	else
		return (right);
}
