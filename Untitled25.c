//if-else structure 
#include <stdio.h>
int main() {
    int marks = 65;  // Marks obtained by the student

    // If-else checks if marks are non-zero (passing condition is true)
    if (marks) {
        printf("You passed the exam.\n");  // Executes if marks are non-zero
    } else {
        printf("You failed the exam.\n");  // Executes if marks are zero
    }
    return 0;
}
