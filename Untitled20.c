// We use three arrays: one to store vowels,
// another for consonants, and a third for digit characters
#include <stdio.h>

int main() {
    // Declare and initialize the array
    char vowels[10] = {'a', 'e', 'i', 'o', 'u'}; 
    char consonants[5] = {'b', 'c', 'd', 'f', 'g'}; 
    char digits[7] = {'0', '1', '2', '3', '4', '5', '6'}; 

    // Calculate and print sizes for vowels array
    printf("Vowels array:\n");
    printf("Total size: %zu bytes\n", sizeof(vowels));
    printf("Element size: %zu byte\n", sizeof(vowels[0]));
    printf("Number of elements: %zu\n\n", sizeof(vowels)/sizeof(vowels[0]));

    // Calculate and print sizes for consonants array
    printf("Consonants array:\n");
    printf("Total size: %zu bytes\n", sizeof(consonants));
    printf("Element size: %zu byte\n", sizeof(consonants[0]));
    printf("Number of elements: %zu\n\n", sizeof(consonants)/sizeof(consonants[0]));

    // Calculate and print sizes for digits array
    printf("Digits array:\n");
    printf("Total size: %zu bytes\n", sizeof(digits));
    printf("Element size: %zu byte\n", sizeof(digits[0]));
    printf("Number of elements: %zu\n", sizeof(digits)/sizeof(digits[0]));

    return 0; 
}

