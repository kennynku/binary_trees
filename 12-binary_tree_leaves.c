#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: node
 * Return: leaves in a binary tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t k = 0;

	if (!tree)
		return (0);
	k = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
	if (!tree->left && !tree->right)
	k += 1;
	return (k);
}
