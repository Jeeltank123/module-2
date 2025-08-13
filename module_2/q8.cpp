#include <stdio.h>

int main() {
    int a[5];            // 1D array for 5 integers
    int b[3][3];         // 2D array for 3x3 matrix
    int i, j, sum = 0;

    // 1D Array input and print
    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    printf("You entered:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }

    // 2D Array input and sum
    printf("\n\nEnter 3x3 matrix numbers:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &b[i][j]);
            sum += b[i][j];
        }
    }

    // Print matrix
    printf("Matrix is:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    // Print sum
    printf("Sum of all elements = %d\n", sum);

    return 0;
}

