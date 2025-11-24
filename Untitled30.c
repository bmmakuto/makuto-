//Write a program to input a student’s name and score,
// then display whether the student has passed 
//or failed based on the score
#include <stdio.h> 

struct Student {
    char name[30];  
    int score;      
};

int main() {
    struct Student s1;  // Declare a variable s1 of type Student

    // Prompt the user to enter the student's name and score
    // printf("Enter name and score: ");
    
    // Read the name and score from user input and store in s1's members
    scanf("%s %d", s1.name, &s1.score);

    // Check if the student's score is 40 or more
    if (s1.score >= 40) {
        printf("Result: Pass\n");  // Print "Pass" if score is >= 40
    } else {
        printf("Result: Fail\n");  // Otherwise, print "Fail"
    }

    // Print the student's name
    printf("Name: %s\n", s1.name);

    // Print the student's score
    printf("Score: %d\n", s1.score);

    return 0;  
}

