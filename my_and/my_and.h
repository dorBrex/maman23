/*adding standard libraries */
#include <stdio.h>
#include <stdarg.h>

/*defining macros to print*/
#define START printf("----Start of calculation----\n");
#define END printf("\n----End of calculation----\n\n");
#define NO_INPUT_ERROR printf("No arguments inserted for the function to run :(.\n");

/*declaring functions*/
void printBinary(int val);

void and_bitwise_on_unknown_amount_of_numbers(int num, ...);