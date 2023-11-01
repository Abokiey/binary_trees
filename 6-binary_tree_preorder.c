#include "binary_trees.h"

/**
 * binary_tree_preorder - traverse through a tree
 * @tree: pointer to the root node
 * @func: pointer to the function call
 *
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	if (func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);

}
