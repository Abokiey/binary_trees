#include "binary_trees.h"

/**
 * binary_tree_leaves - Entry point->It counts the leaves in binary tree.
 * @tree: input pointer to the root node of the tree to count number of leaves.
 * Return: number of leaves OR 0 if tree is NULL (Success)
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (!tree)
		return (0);
	if (!(tree->left) && !(tree->right))
		return (1);
	leaves = binary_tree_leaves(tree->left) +
		binary_tree_leaves(tree->right);

	return (leaves);
}
