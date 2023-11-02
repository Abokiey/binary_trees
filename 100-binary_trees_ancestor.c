#include "binary_trees.h"

/**
 * binary_trees_ancestor - lowest ancestor in a node
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: lowest ancestor
 */

binary_tree_t *binary_trees_ancestor(
		const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *temp;

	if (first == NULL || second == NULL)
		return (NULL);
	temp = (binary_tree_t *)second;
	while (first)
	{
		while (second)
		{
			if (first == second)
				return ((binary_tree_t *)first);
			second = second->parent;
		}
		second = temp;
		first = first->parent;
	}
	return (NULL);

}
