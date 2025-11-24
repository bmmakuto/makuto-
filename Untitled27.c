// if statement using the logical AND operator (&&).
#include <stdio.h>

int main() {
    int age = 20;
    int income = 50000;

    // Check if age is greater than or equal to 18 AND income is greater than 30000
    if (age >= 18 && income > 30000) {
        printf("You are eligible for the loan.\n");
    } else {
        printf("You are not eligible for the loan.\n");
    }

    return 0;
}
