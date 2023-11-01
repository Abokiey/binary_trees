#include "binary_trees.h"

/**
 * binary_tree_is_root - Entry point-> It checks if a node is a root.
 * @node: input pointer to the node to check
 * Return: 1 if root or if not 0 (Success)
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node && !(node->parent))
		return (1);
	else
		return (0);
}
