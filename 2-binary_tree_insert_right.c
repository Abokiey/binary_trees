#include "binary_trees.h"

/**
 * binary_tree_insert_right - Entry point-> It inserts node at right-child.
 * @parent: input pointer to the node to insert the right-child in
 * @value: input value to store in the new node
 * Return: Node inserted at right-child (Success)
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_node;

	if (!parent)
		return (NULL);
	right_node = malloc(sizeof(binary_tree_t));
	if (!right_node)
		return (NULL);

	right_node->n = value;
	right_node->parent = parent;
	right_node->left = NULL;
	right_node->right = parent->right;
	if (parent->right)
		parent->right->parent = right_node;
	parent->right = right_node;

	return (right_node);
}
