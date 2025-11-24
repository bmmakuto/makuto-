//an if statement is used to check whether a specific condition is true.
#include <stdio.h>
int main() {
    int temperature = 30;  // Temperature value is set to 30

    // If statement checks if temperature is non-zero (assuming it's hot if non-zero)
    if (temperature) {
        printf("It's a hot day.\n");  // This line executes if temperature is non-zero
    }
    return 0;
}
