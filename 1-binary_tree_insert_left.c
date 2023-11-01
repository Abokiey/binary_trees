#include "binary_trees.h"

/**
 * binary_tree_insert_left - Entry point-> It inserts a node at the left-child.
 * @parent: input pointer to the node to insert the left-child in
 * @value: input value to store in the new node
 * Return: Node inserted at left-child node (Success)
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_node;

	if (!parent)
		return (NULL);
	left_node = malloc(sizeof(binary_tree_t));
	if (!left_node)
		return (NULL);

	left_node->n = value;
	left_node->parent = parent;
	left_node->left = parent->left;
	left_node->right = NULL;
	if (parent->left)
		parent->left->parent = left_node;
	parent->left = left_node;

	return (left_node);
}
