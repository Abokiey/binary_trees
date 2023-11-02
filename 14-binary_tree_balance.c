#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factors
 * @tree: pointer to the root node of the tree to measure
 * Return: the balance factor
 *
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
	{
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	}
	return (0);
}

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

	left = binary_tree_height(tree->left) + 1;
	right = binary_tree_height(tree->right) + 1;

	if (left > right)
		return (left);
	else
		return (right);
}
