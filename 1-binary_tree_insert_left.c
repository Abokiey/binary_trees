#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert node at the left of the tree
 * @parent: pointer to the node to insert
 * @value: value to store in the node
 * Return: return pointer to the newnode
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
		return (NULL);

	newnode = binary_tree_node(parent, value);
	if (newnode == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		newnode->left = parent->left;
		parent->left->parent = newnode;
	}
	parent->left = newnode;

	return (new);
}
