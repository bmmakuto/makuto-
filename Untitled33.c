//Complete the program to manage details
// of 4 employees using an array of structures.
// Define the structure Employee with name and salary
struct Employee {
    char name[30];  // Employee's name
    int salary;     // Employee's salary
};

int main() {
    // Declare an array of 4 Employee structures
    struct Employee employees[4];

    // Input employee details
    for (int i = 0; i < 4; i++) {
     // printf("Enter name and salary for employee %d: ", i + 1);
        scanf("%s %d", employees[i].name, &employees[i].salary);
    }

    // Print all employee details
    for (int i = 0; i < 4; i++) {
        // Access and print employee name and salary
        printf("Employee %d: Name = %s, Salary = %d\n", i + 1, employees[i].name, employees[i].salary);
    }

    return 0;
}
