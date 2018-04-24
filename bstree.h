#ifndef BSTREE_H
#define BSTREE_H

#include <stdbool.h>

typedef struct bstree BSTree;

#include "bstiter.h"

BSTree * bstree_new();
bool bstree_is_empty(BSTree *self);
bool bstree_find(BSTree *self, int value);
int bstree_min(BSTree *self);
int bstree_max(BSTree *self);
bool bstree_insert(BSTree *self, int value);
bool bstree_delete(BSTree *self, int value);
void bstree_free(void *self);

#endif // BSTREE_H
