#include "binary_trees.h"

/**
* binary_tree_height - Measures the height of a binary tree.
* @tree: Pointer to the root node of the tree to measure.
*
* Return: Height or 0 if tree is NULL.
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left = 0, right = 0;

if (!tree)
return (0);

if (tree->left)
left = 1 + binary_tree_height(tree->left);
if (tree->right)
right = 1 + binary_tree_height(tree->right);

return ((left > right) ? left : right);
}

/**
* binary_tree_size - Measures the number of nodes in a binary tree.
* @tree: Pointer to the root node.
*
* Return: Number of nodes or 0 if tree is NULL.
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
if (!tree)
return (0);

return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}

/**
* power - Calculates power of base^exp
* @base: base number
* @exp: exponent
* Return: result of base raised to exp
*/
size_t power(size_t base, size_t exp)
{
size_t result = 1;

while (exp > 0)
{
result *= base;
exp--;
}

return (result);
}

/**
* binary_tree_is_perfect - Checks if a binary tree is perfect.
* @tree: Pointer to the root node.
*
* Return: 1 if perfect, 0 otherwise.
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
size_t height, size, expected_nodes;

if (!tree)
return (0);

height = binary_tree_height(tree);
size = binary_tree_size(tree);
expected_nodes = power(2, height + 1) - 1;

return (size == expected_nodes);
}

