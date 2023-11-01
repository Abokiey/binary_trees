#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Entry point-> It checks if a node is a leaf.
 * @node: input pointer to the node to check
 * Return: 1 - is a leaf (Success) OR if not (Failed)
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node && !(node->left) && !(node->right))
		return (1);
	else
		return (0);
}
