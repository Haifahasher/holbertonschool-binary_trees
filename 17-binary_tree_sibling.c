#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node
 * @node: Pointer to the node to find the sibling of
 *
 * Return: Pointer to the sibling node, or NULL if node is NULL,
 *         parent is NULL, or no sibling exists
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (node == NULL || node->parent == NULL)
return (NULL);
if (node->parent->left && node->parent->left != node)
return (node->parent->left);
if (node->parent->right && node->parent->right != node)
return (node->parent->right);

return (NULL);
}
