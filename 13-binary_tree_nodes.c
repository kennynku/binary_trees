#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: node
 * Return: nodes with at least 1 child in a binary tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t k = 0;

	if (!tree)
		return (0);
	k = binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);
	if (tree->left || tree->right)
	k += 1;
	return (k);
}
