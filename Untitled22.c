//The for loop is perfect for this task because 
//it lets us easily access each element using its index.
#include <stdio.h>

int main() {
    // Declare and initialize an array with 5 values
    int numbers[5] = {10, 20, 30, 40, 50};

    // Loop through and print each element
    for (int i = 0; i < 5; i++) {
        printf("Element at index %d: %d\n", i, numbers[i]);
    }

    return 0;
} 
