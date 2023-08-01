#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: node
 * Return: Always 0 (Success)
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int k = 0;

	if (!tree)
		return (0);
	if (tree->parent)
	{
		k = binary_tree_depth(tree->parent);
		k += 1;
	}
	return (k);
}
