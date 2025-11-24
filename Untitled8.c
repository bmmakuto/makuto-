#include <stdio.h>
#include <string.h>
//Mistake #3: Non-terminated strings

int main(void) {
    char str[10];
    int i;

    strcat(str,"Bump!");
    printf("%s",str);
    return 0;
}
