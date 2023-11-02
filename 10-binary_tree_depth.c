#include "binary_trees.h"

/**
 * binary_tree_depth - Entry point-> It measures depth of a node in binary tree
 * @tree: input pointer to the node to measure the depth
 * Return: depth of binary tree (Success)
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);
	if (tree->parent)
		depth = binary_tree_depth(tree->parent) + 1;

	return (depth);
}
