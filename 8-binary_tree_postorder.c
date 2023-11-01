#include "binary_trees.h"

/**
 * binary_tree_postorder - traverse the tree using postorder
 * @tree: pointer to the root node of the tree
 * @func: pointer to the func call to each node
 *
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);

}
