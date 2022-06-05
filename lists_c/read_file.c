#include "lists_c.h"
#include "linked_list_utils.h"
#include "read_file.h"

int read_file(char *file_name, ptr *linked_list) {
    /*Reading the file and inserting its words into a linked list*/
    char raw_text[DATA_SIZE] = {0};
    FILE *fp = fopen(file_name, "r");

    if (fp == NULL) {
        fprintf(stderr, "File Opening Error");
        return ERROR;
    }
    while (fgets(raw_text, DATA_SIZE, fp) != NULL) {
        /*inserting the words into a linked list, size 2048bytes*/
        add_to_list(linked_list, raw_text);
    }
    fclose(fp);
    return 0;
}