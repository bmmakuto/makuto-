/* The bubble sort - final version */

#include <stdio.h> 
int main(void) {
        int numbers[5];
        int i, aux;
        int swapped;
        
		/* ask the user to enter 5 values */
        for(i = 0; i < 5; i++) {
            printf("\nEnter value #%i\n",i + 1);
            scanf("%d",&numbers[i]);
        }
        
