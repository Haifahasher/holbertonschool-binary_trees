# Binary Trees Project

This repository contains a C library to create, manipulate, and traverse binary trees following Holberton School specifications.

## Table of Contents

* [Description](#description)
* [Requirements](#requirements)
* [Installation & Compilation](#installation--compilation)
* [Repository Structure](#repository-structure)
* [Function Reference](#function-reference)
* [Usage Example](#usage-example)
* [Coding Style](#coding-style)
* [Author](#author)

---

## Description

A set of functions provides the ability to:

* **Create** and **delete** nodes
* **Insert** left and right children
* **Check** node properties (root, leaf, full, perfect)
* **Traverse** trees (pre-order, in-order, post-order)
* **Measure** metrics (height, depth, size, leaves, nodes, balance)
* **Find** relatives (sibling, uncle)

Tasks **0–23** focus on simple binary trees (no BST, AVL, or heap rules applied).

---

## Requirements

* **OS:** Ubuntu 20.04 LTS
* **Compiler:** `gcc` with flags:

  ```bash
  -Wall -Werror -Wextra -pedantic -std=gnu89
  ```
* **Editor:** `vi`, `vim`, or `emacs`
* **Style:** Betty style (checked with `betty-style.pl` & `betty-doc.pl`)
* **No** global variables
* **Max** 5 functions per `.c` file
* **Include guard** in **binary\_trees.h**

---

## Installation & Compilation

Clone the repo and compile any task with:

```bash
git clone https://github.com/Haifahasher/holbertonschool-binary_trees.git
cd holbertonschool-binary_trees

# Example for Task 0 (node creation)
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 \
    binary_tree_print.c 0-binary_tree_node.c 0-main.c -o 0-node

./0-node
```

Replace `0-*.c` and `0-main.c` with the files for the task you're testing.

---

## Repository Structure

```
.
├── README.md
├── binary_tree_print.c     # Visual helper for printing trees
├── binary_trees.h          # Data structure & prototypes
├── 0-binary_tree_node.c    # Task 0: Create node
├── 1-binary_tree_insert_left.c
├── 2-binary_tree_insert_right.c
├── 3-binary_tree_delete.c
├── 4-binary_tree_is_leaf.c
├── 5-binary_tree_is_root.c
├── 6-binary_tree_preorder.c
├── 7-binary_tree_inorder.c
├── 8-binary_tree_postorder.c
├── 9-binary_tree_height.c
├── 10-binary_tree_depth.c
├── 11-binary_tree_size.c
├── 12-binary_tree_leaves.c
├── 13-binary_tree_nodes.c
├── 14-binary_tree_balance.c
├── 15-binary_tree_is_full.c
├── 16-binary_tree_is_perfect.c
├── 17-binary_tree_sibling.c
├── 18-binary_tree_uncle.c
```

---

## Function Reference

| Function                                  | Description                                             |
| ----------------------------------------- | ------------------------------------------------------- |
| `binary_tree_node(parent, value)`         | Create a new node                                       |
| `binary_tree_insert_left(parent, value)`  | Insert a left child                                     |
| `binary_tree_insert_right(parent, value)` | Insert a right child                                    |
| `binary_tree_delete(tree)`                | Delete an entire tree                                   |
| `binary_tree_is_leaf(node)`               | Check if a node is a leaf                               |
| `binary_tree_is_root(node)`               | Check if a node is the root                             |
| `binary_tree_preorder(tree, func)`        | Pre-order traversal (root, left, right)                 |
| `binary_tree_inorder(tree, func)`         | In-order traversal (left, root, right)                  |
| `binary_tree_postorder(tree, func)`       | Post-order traversal (left, right, root)                |
| `binary_tree_height(tree)`                | Measure height (max edges to a leaf)                    |
| `binary_tree_depth(node)`                 | Measure depth (edges to the root)                       |
| `binary_tree_size(tree)`                  | Count total nodes                                       |
| `binary_tree_leaves(tree)`                | Count leaf nodes                                        |
| `binary_tree_nodes(tree)`                 | Count nodes with ≥ 1 child                              |
| `binary_tree_balance(tree)`               | Compute balance factor (left\_height − right\_height)   |
| `binary_tree_is_full(tree)`               | Check if tree is full (0 or 2 children per node)        |
| `binary_tree_is_perfect(tree)`            | Check if tree is perfect (all levels completely filled) |
| `binary_tree_sibling(node)`               | Find the sibling of a node                              |
| `binary_tree_uncle(node)`                 | Find the uncle of a node                                |

---

## Usage Example

```c
#include "binary_trees.h"
#include <stdio.h>

void print_int(int n)
{
    printf("%d\n", n);
}

int main(void)
{
    binary_tree_t *root = binary_tree_node(NULL, 10);
    binary_tree_insert_left(root, 5);
    binary_tree_insert_right(root, 15);
    binary_tree_print(root);

    printf("In-order traversal:\n");
    binary_tree_inorder(root, print_int);

    printf("Tree height: %lu\n", binary_tree_height(root));
    printf("Total nodes: %lu\n", binary_tree_size(root));

    binary_tree_delete(root);
    return (0);
}
```

---

## Coding Style

* Follow **Betty** indentation and documentation rules.
* Document every function with a header comment.
* No more than **5 functions** per source file.
* No unused variables or functions.

---

## Author

HaifahasherHolberton School — Binary Trees Project

Bushra2252Holberton School — Binary Trees Project
