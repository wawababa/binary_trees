#include "binary_trees.h"
#include "limits.h"
int is_bst_helper(const binary_tree_t *tree, int *largest);

#define VERBOSE 0

/**
 * binary_tree_is_bst - checks if a binary tree is a valid Binary Search Tree.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 1 if tree is a valid BST, and 0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	int tracker = INT_MIN;

	if (tree == NULL)
		return (0);
	return (is_bst_helper(tree, &tracker));
}


/**
 * is_left - checks if a node is a left child of some other node
 * @node: A pointer to the node to be checked.
 * Return: 1 if is a left child, otherwise 0
 */
int is_left(const binary_tree_t *node)
{
	if (node && node->parent)
		return (node->parent->left == node);
	return (0);
}
/**
 * is_right - checks if a node is a right child of some other node
 * @node: A pointer to the node to be checked.
 * Return: 1 if is a right child, otherwise 0
 */
int is_right(const binary_tree_t *node)
{
	if (node && node->parent)
		return (node->parent->right == node);
	return (0);
}

#if !VERBOSE
/**
 * is_bst_helper - checks if a binary tree is a valid Binary Search Tree.
 * @tree: A pointer to the root node of the tree to check.
 * @largest: Value of largest node visited so far.
 *
 * Return: 1 if tree is a valid BST, and 0 otherwise

