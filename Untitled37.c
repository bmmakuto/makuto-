//how to check the current position of the file pointer
#include <stdio.h>

int main() {
    FILE *file = fopen("example.txt", "w");

    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    fprintf(file, "Hello");
    long pos = ftell(file);
    printf("Current position: %ld\n", pos);

    fclose(file);
    return 0;
}
