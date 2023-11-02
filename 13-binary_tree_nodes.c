#include "binary_trees.h"

/**
 * binary_tree_nodes - Entry point-> It counts nodes with at least child in
 * a binary tree.
 * @tree: input pointer to the root node of the tree to count number of nodes.
 * Return: number of nodes OR 0 if tree is NULL (Success)
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (!tree)
		return (0);
	if (!(tree->left) && !(tree->right))
		return (0);
	nodes = binary_tree_nodes(tree->left) +
		binary_tree_nodes(tree->right) + 1;

	return (nodes);
}
