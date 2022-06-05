lists_c: lists_c.o linked_list_utils.o read_file.o
	gcc -g -Wall -ansi -pedantic lists_c.o linked_list_utils.o read_file.o -o lists_c

lists_c.o: lists_c.c lists_c.h read_file.h linked_list_utils.h
	gcc -c -Wall -ansi -pedantic lists_c.c -o lists_c.o

linked_list_utils.o: linked_list_utils.c lists_c.h linked_list_utils.h
	gcc -c -Wall -ansi -pedantic linked_list_utils.c -o linked_list_utils.o

read_file.o: read_file.c lists_c.h read_file.h
	gcc -c -Wall -ansi -pedantic read_file.c -o read_file.o

clean:
	rm read_file.o lists_c.o linked_list_utils.o