#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a node is a root
 * @node: Pointer to the node to check
 *
 * Return: 1 if node is a root, 0 otherwise or if node is NULL
 */
int binary_tree_is_root(const binary_tree_t *node)
{
if (node == NULL || node->parent != NULL)
return (0);

return (1);
}
