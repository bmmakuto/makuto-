//An Array of Structures is a collection of multiple structure variables,
// all of the same type, stored in contiguous memory locations
#include <stdio.h>

// Define a structure named Book
struct Book {
    char title[50];  // Array to store the book title
    int pages;       // Number of pages in the book
};

int main() {
    // Initialize an array of 2 Book structures with predefined values
    struct Book library[2] = {
        {"C Programming Basics", 250},  // First book with title and pages
        {"Data Structures", 320}         // Second book with title and pages
    };

    // Print header for clarity
    printf("Book Details:\n");

    // Loop through each element of the array to access and print details
    for (int i = 0; i < 2; i++) {
        // Access members using dot operator and print title and pages
        printf("Title: %s, Pages: %d\n", library[i].title, library[i].pages);
    }

    return 0;
}
