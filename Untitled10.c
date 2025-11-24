//If the variable is declared 
//outside of all the blocks, it becomes a global variable.
#include <stdio.h>

int global;

void fun(void) {
    int local;

    local = 2;
    global++;
    printf("fun: local=%d global=%d\n", local, global);
    global++;
}

int main(void) {
    int local;

    local = 1;
    global = 1;
    printf("main: local=%d global=%d\n", local, global);
    fun();
    printf("main: local=%d global=%d\n", local, global);
    return 0;
}
