//ple we demonstrate how to store multiple student records using an array of structures
// and access each student's details with a loop
#include <stdio.h>

// Define the structure Student with two members
struct Student {
    char name[30];  // Student's name
    int score;      // Student's score
};

int main() {
    // Declare and initialize an array of 3 Student structures
    struct Student students[3] = {
        {"Alice", 85},
        {"Bob", 90},
        {"Charlie", 78}
    };

    // Loop through the array to print each student's details
    for (int i = 0; i < 3; i++) {
        printf("Student %d: Name = %s, Score = %d\n", i + 1, students[i].name, students[i].score);
    }

    return 0;
}

