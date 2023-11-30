# Binary Trees Project

## Introduction
This project aims to implement various functionalities related to binary trees, including basic binary trees, Binary Search Trees (BST), AVL Trees, and Max Binary Heaps. The project adheres to certain guidelines and requirements outlined below.

## Requirements
- **Editors**: Allowed editors include vi, vim, and emacs.
- **Compilation**: All files will be compiled on Ubuntu 20.04 LTS using gcc with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- **File Standards**: All files should end with a new line.
- **README.md**: A README.md file at the root of the project folder is mandatory.
- **Coding Style**: Code should follow the Betty style and will be checked using betty-style.pl and betty-doc.pl.
- **Global Variables**: Prohibited; do not use global variables.
- **Functions**: Each file should contain no more than 5 functions.
- **Standard Library**: Usage of the standard library is allowed.
- **Data Structures**: Required data structures and types for binary trees are detailed below.
- **Header File**: Prototypes of all functions should be included in a header file named `binary_trees.h`.
- **Header Files**: All header files should be include guarded.
- **GitHub**: One project repository per group is required to avoid potential score deduction.

## Data Structures
Please use the following data structures and types for binary trees:

### Basic Binary Tree
```c
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;

### Binary Search Tree

typedef struct binary_tree_s bst_t;

### AVL Tree

typedef struct binary_tree_s avl_t;

### Max Binary Heap

typedef struct binary_tree_s heap_t;



