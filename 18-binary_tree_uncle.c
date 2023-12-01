#include "binary_trees.h"
/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find the uncle
 * Return: pointer to the uncle node or NULL
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *gd_parent;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	gd_parent = node->parent->parent;
	if (gd_parent->left == node->parent)
		return (gd_parent->right);
	else if (gd_parent->right == node->parent)
		return (gd_parent->left);
	return (NULL);
}
