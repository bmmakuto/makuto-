#include <stdio.h>
#include <string.h>
// files
void run_main_program() {
    FILE *file  = fopen("/home/chef/workspace/notes.txt", "r");
    if (file == NULL) {
        printf("Error: Unable to open notes.txt\n");
    }
    
        char line[256];
        int total_characters = 0;

        while (fgets(line, sizeof(line), file)) {
            total_characters += strlen(line);
        }

        fclose(file);
        printf("\nTotal characters (including newlines): %d\n", total_characters);
    }
 

int main() {
    
    run_main_program();
    return 0;
}

