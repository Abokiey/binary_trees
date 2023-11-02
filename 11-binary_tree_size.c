#include "binary_trees.h"

/**
 * binary_tree_size - Entry point-> It measures size of a binary tree.
 * @tree: input pointer to the root node of the tree to measure the size
 * Return: size of the binary tree (Success)
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (!tree)
		return (0);
	size = binary_tree_size(tree->left) +
		binary_tree_size(tree->right) + 1;

	return (size);
}
