#include <stdio.h>

int main() {
    int n, i, j;
    int matrix[10][10];   // You can adjust size as needed
    int trace = 0;

    // Input matrix size
    printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);

    // Input matrix elements
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate trace (sum of diagonal elements)
    for (i = 0; i < n; i++) {
        trace += matrix[i][i];
    }

    // Output the matrix
    printf("\nThe matrix is:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // Output the trace
    printf("\nTrace of the matrix = %d\n", trace);

    return 0;
}

