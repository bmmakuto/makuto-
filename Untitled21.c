//In this task, the program uses the sizeof() operator in C 
//to analyze memory usage and element 
//count for two arrays of different data types: short and int
#include <stdio.h>

int main() {
    // Declare arrays of different data types
    short arr_short[5];   // Array of 5 short integers
    int arr_int[3];       // Array of 3 integers

    // Print total memory occupied by each array(Use %zu to print values returned by sizeof.)
    printf("Total memory for short array: %zu bytes\n", sizeof(arr_short[0]));
    printf("Total memory for int array: %zu bytes\n",sizeof(arr_int[0]) );

    // Print size of a single element from each array
    printf("Size of one short element: %zu bytes\n", sizeof(arr_short));
    printf("Size of one int element: %zu bytes\n", sizeof(arr_int[0]));

    // Calculate and print number of elements in each array
    printf("Elements in short array: %zu\n", sizeof(arr_short) / sizeof(arr_short[0]));
    printf("Elements in int array: %zu\n",sizeof(arr_int) / sizeof(arr_int[0]) );

    return 0;
}
