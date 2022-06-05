#include "lists_c.h"
#include "linked_list_utils.h"

void add_to_list(ptr *ptr_list, char raw_text[DATA_SIZE]) {
    /*add_to_list function takes a pointer to a linked-list of data-holders structs, checks if the linked-list exists
     * if not, it creates one, and add links to it. if it exists, it adds a new struct to the end of the linked-list
     * if needed it goes over the linked-list till the end of it, to add the new link over there*/

    ptr temp_pointer, ptr_to_items_list, pointer_to_item;

    /* ptr_to_items_list is now pointing to the first struct in the beginning of the linked_list*/
    ptr_to_items_list = *ptr_list;

    /* create a new link (Struct) to hold the input string*/
    pointer_to_item = (ptr) malloc(sizeof(item));

    /* Check if the creation (malloc) of the new link succeeded*/
    if (!pointer_to_item) {
        fprintf(stderr, "Cannot allocate memory");
        exit(0);
    }

    /* Copy data from the input into the new link*/
    strcpy(pointer_to_item->word, raw_text);

    /* If the linked-list is empty (doesn't exist) create a new one*/
    if (!(*ptr_list)) {
        pointer_to_item->next = NULL;
        *ptr_list = pointer_to_item;
        return;
    }
    while (ptr_to_items_list->next != NULL) {
        temp_pointer = ptr_to_items_list->next;
        ptr_to_items_list = temp_pointer;
    }
    /* If the linked-list exists - add the new link to the end of the list*/
    ptr_to_items_list->next = pointer_to_item;
    pointer_to_item->next = NULL;

}

/*This function gets an int value and prints its binary value to the screen*/
void print_list(ptr linked_list) {
    while (linked_list) {
        printf("%s", linked_list->word);
        linked_list = linked_list->next;
    }
}

void free_list(ptr *ptr_to_linked_list) {
    /*Freeing a linked-list objects from the memory of the heap (program runtime memory)*/
    ptr pointer_to_item;
    while (*ptr_to_linked_list) {
        pointer_to_item = *ptr_to_linked_list;
        *ptr_to_linked_list = pointer_to_item->next;
        free(pointer_to_item);
    }
}
