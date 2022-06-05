#include "lists_c.h"
#include "linked_list_utils.h"
#include "read_file.h"

/*lists_c module is reading a file insert in the prompt - command line, when the exe(elf) file is called
 * it takes the path_file_name inserted and reading the file, storing it in structs which are connected as
 * linked-list and then being printed */

int main(int argc, char *argv[]) {
    ptr linked_lists = NULL;
    /* Argc should have 2 values - 1. the name of the code_file, 2. the file_name the user wants to read from*/
    if (argc != 2) {
        fprintf(stderr, "\nError: The user didn't insert the exact amount of arguments.\n Only 1 string that represents a path and file name\n\n");
        return ERROR;
    }
    /*Reading the file and inserting it's words into a linked list*/
    read_file(argv[1], &linked_lists);
    /*printing the linked-list's data*/
    print_list(linked_lists);
    /*freeing up all the memory usage (mallocs)*/
    free_list(&linked_lists);
    return 0;
}