#include "my_and.h"

/*my_and.c module has a main function called - and_bitwise_on_unknown_amount_of_numbers
 * which gets unknown amount of positive larger or equal to 0 */


int main() {
    /*main function to call the bitwise ADD function with all the arguments*/
    and_bitwise_on_unknown_amount_of_numbers(2, 255, 143);
    and_bitwise_on_unknown_amount_of_numbers(4, 5, 13, 513, 1);
    and_bitwise_on_unknown_amount_of_numbers(0);
    and_bitwise_on_unknown_amount_of_numbers(7, 30, 23, 250, 31, 253, 254, 255);
    return 0;
}

void printBinary(int val) {
    /*This function gets an int value and prints its binary value to the screen*/
    unsigned long mask = 1;
    printf("This number in binary is: ");
    mask <<= 31;
    while (mask) {
        if ((val & mask) == 0) {
            printf("0");
        } else {
            printf("1");
        }
        mask >>= 1;
    }

}

void and_bitwise_on_unknown_amount_of_numbers(int num, ...) {
    /* This function does a bitwise ADD between all the int arguments in gets */
    int i;
    /*NOT operation on 0 will get us a `11...11` binary value - which would keep the first argument after an ADD*/
    unsigned int result = ~0;
    va_list args;
    START
    va_start(args, num);
    if (num == 0) {
        NO_INPUT_ERROR
        END
        return;
    }

    for (i = 0; i < num; i++) {
        int value = va_arg(args, int);
        printf("\nThe %d positive integer is: %d.\t", i + 1, value);
        printBinary(value);
        result = result & value;
    }
    /*print the result in decimal*/
    printf("\nThe result is: %d in decimal.\t", result);
    /*print the result in binary*/
    printBinary((int) result);
    /*print the result in hexadecimal*/
    printf("\tThe result is: %x in hexadecimal.\t", result);


    va_end(args);
    END
}


