#include <stdio.h>
// to determine the size (in bytes) of a data type or variable.
int main() {
    int numbers[5] = {10, 20, 30, 40, 50};  // Array of 5 integers

    // %zu is the correct specifier for size_t returned by sizeof
    // Total size: 5 elements * 4 bytes (assuming 4 bytes per int) = 20 bytes
    printf("Size of the entire array: %zu bytes\n", sizeof(numbers));

    // Size of one element (int): typically 4 bytes
    printf("Size of one element: %zu bytes\n", sizeof(numbers[0]));

    // Number of elements in the array
    int count = sizeof(numbers) / sizeof(numbers[0]);
    printf("Number of elements: %d\n", count);

    return 0;
}
