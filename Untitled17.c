
//In this example, we demonstrate 
//how to modify specific elements in an array using their index positions in C
int main() {
    // Declare and initialize an array with 5 values
    int numbers[5] = {10, 20, 30, 40, 50};

    // Print original array
    printf("Original array: ");
    printf("%d %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3], numbers[4]);

    // Modify some elements using index
    numbers[1] = 25;  // Change 20 to 25
    numbers[3] = 45;  // Change 40 to 45

    // Print updated array
    printf("Updated array: ");
    printf("%d %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3], numbers[4]);

    return 0;
}
