#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: node
 * Return: sibling of a node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *k;

	if (!node || !node->parent)
		return (NULL);
	if (!node->parent->right || !node->parent->left)
		return (NULL);
	if (node->parent->right != node)
		k = node->parent->right;
	else
		k = node->parent->left;
	return (k);
}
