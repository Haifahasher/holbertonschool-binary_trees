#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: The height of the tree (number of edges on the longest
 *         path from the node to a leaf), or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t height_l = 0;
size_t height_r = 0;

if (!tree)
return (0);

height_l = tree->left  ? 1 + binary_tree_height(tree->left)  : 0;
height_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;

return (height_l > height_r ? height_l : height_r);
}
