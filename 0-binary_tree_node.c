#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_node - binary tree to be created
 * @parent: pointer to the parent node
 * @value: is the value to put in the node
 * Return: pointer to the new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{

	binary_tree_t *newnode;

	newnode = malloc(sizeof(binary_tree_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = value;
	newnode->parent = parent;
	newnode->left = (NULL);
	newnode->right = (NULL);

	return (newnode);
}
