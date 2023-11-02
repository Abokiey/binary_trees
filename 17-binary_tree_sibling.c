#include "binary_trees.h"

/**
 * binary_tree_sibling - find the sibling of a node
 * @tree: pointer to the node of the sibling
 * Return: true or falsse
 *
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node == node->parent->left)
		return (node->parent->right);
	return (node->parent->left);

}
