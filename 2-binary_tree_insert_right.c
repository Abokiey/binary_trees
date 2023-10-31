#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert node at the right child
 * @parent: pointer to the node to insert the value
 * @value: the data to be inserted in the node
 * Return: return pointer to the new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
		return (NULL);

	newnode = binary_tree_node(parent, value);
	if (newnode == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		newnode->right = parent->right;
		newnode->right->parent = newnode;

	}
	parent->right = newnode;

	return (newnode);

}
