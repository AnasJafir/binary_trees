#include "binary_trees.h"
/**
 * depth_comparison - compare depth
 * @tree: pointer to the node to measure the depth
 * Return: the size or 0
*/
int depth_comparison(const binary_tree_t *tree)
{
	int size = 0;

	if (tree == NULL)
		return (0);
	size = depth_comparison(tree->left) + depth_comparison(tree->right) + 1;
	return (size);
}
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if binary tree is perfect or 0
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height = 0;
	int right_height = 0;

	if (tree == NULL)
		return (0);
	if (tree != NULL && (tree->left == NULL && tree->right == NULL))
		return (1);
	left_height = depth_comparison(tree->left);
	right_height = depth_comparison(tree->right);
	if ((left_height - right_height) == 0)
		return (1);
	return (0);
}
