// Use append mode ("a") to 
//ensure the new line is added at the end without
// deleting previous content.
#include <stdio.h>

void run_main_program() {
    // Step 1: Open file in append mode
    FILE *file = fopen("/home/chef/workspace/notes.txt", "a");

    // Step 2: Check for success
    if (file == NULL) {
        printf("Error opening the file.\n");
    }
    else{
        // Step 3: Append the note
        fprintf(file, "Note: Task added to list.\n");

        // Step 4: Close the file
        fclose(file);
    }
}

int main() {
    run_main_program();
    return 0;
}
