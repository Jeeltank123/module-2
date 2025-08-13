//Write a C program that generates the Fibonacci sequence up to N terms using a recursive function.
//? Challenge: Modify the program to calculate the Nth Fibonacci number using both iterative and recursive methods. Compare their efficiency
#include <stdio.h>

int FibonacciRecursive(int n);
int FibonacciIterative(int n);

int main() {
    int num;

    printf("Enter the number of terms: ");
    scanf("%d", &num);

    printf("\nFibonacci (Recursive):\n");
    for (int i = 0; i < num; i++) {
        printf("%d ", FibonacciRecursive(i));
    }

    printf("\n\nFibonacci (Iterative):\n");
    for (int i = 0; i < num; i++) 
	{
        printf("%d ", FibonacciIterative(i));
    }

    printf("\n");
    return 0;
}


int FibonacciRecursive(int n) 
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return FibonacciRecursive(n - 1) + FibonacciRecursive(n - 2);
}


int FibonacciIterative(int n) 
{
    int a = 0, b = 1, temp;

    if (n == 0)
        return 0;

    for (int i = 2; i <= n; i++) 
	{
        temp = a + b;
        a = b;
        b = temp;
    }
    return b;
}

