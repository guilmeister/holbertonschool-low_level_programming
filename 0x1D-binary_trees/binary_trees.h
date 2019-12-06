#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#define MAX(a, b)  (a < b ? b : a)
#define DIFF(a, b) (a - b)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <limits.h>
#include <stdbool.h>

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
typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;

/*For Mandatory Tasks #0-18*/
void binary_tree_print(const binary_tree_t *);
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
void binary_tree_delete(binary_tree_t *tree);
int binary_tree_is_leaf(const binary_tree_t *node);
int binary_tree_is_root(const binary_tree_t *node);
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));
size_t binary_tree_height(const binary_tree_t *tree);
size_t binary_tree_depth(const binary_tree_t *tree);
size_t binary_tree_size(const binary_tree_t *tree);
size_t binary_tree_leaves(const binary_tree_t *tree);
size_t binary_tree_nodes(const binary_tree_t *tree);
int binary_tree_balance(const binary_tree_t *tree);
int binary_tree_is_full(const binary_tree_t *tree);
int binary_tree_is_perfect(const binary_tree_t *tree);
binary_tree_t *binary_tree_sibling(binary_tree_t *node);
binary_tree_t *binary_tree_uncle(binary_tree_t *node);

/*For Advanced Task: #19*/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second);

/*For Advanced Task: #20*/
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int));
int print_level(const binary_tree_t *tree, int level, void (*func)(int));

/*For Advanced Task: #21*/
int binary_tree_is_complete(const binary_tree_t *tree);
bool isComplete(const binary_tree_t *tree, size_t index, size_t number_nodes);

/*For Advanced Task: #22*/
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree);

/*For Advanced Task: #23*/
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree);

/*For Advanced Task: #24*/
int binary_tree_is_bst(const binary_tree_t *tree);
int bst_checker(const binary_tree_t *tree, int minimum, int maximum);

/*For Advanced Task: #25*/
bst_t *bst_insert(bst_t **tree, int value);

/*For Advanced Task: #26*/
bst_t *array_to_bst(int *array, size_t size);

/*For Advanced Task: #27*/
bst_t *bst_search(const bst_t *tree, int value);

#endif
