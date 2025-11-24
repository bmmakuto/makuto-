//A company wants to store initial information about a device, 
//such as its name and year of manufacture, 
//before adding it to the system
#include <stdio.h>

// Define a structure to represent a device
struct Device {
    char name[30];
    int year;
};

int main() {
    // Declare and initialize a structure variable
    struct Device d1 = {"Thermal Scanner", 2021};
    printf("Structure declared and initialized successfully.");
    return 0;
}
