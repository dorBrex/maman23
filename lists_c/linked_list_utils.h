#ifndef MAMAN23_UTILS
#define MAMAN23_UTILS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#endif /*MAMAN23_UTILS*/

/*declaring structs to be used as links for linked-list*/
typedef struct node *ptr;

typedef struct node {
    char word[DATA_SIZE];
    ptr next;
} item;
/*declaring functions*/
void add_to_list(ptr *ptr_list, char  [2048]);

void print_list(ptr linked_list);

void free_list(ptr *ptr_to_linked_list);