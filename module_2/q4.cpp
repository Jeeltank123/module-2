#include<stdio.h>
main()
{
	int num1;
	int num2;
	
	printf("Enter first number :");
	scanf("%d",&num1);
	printf("Enter second number :");
	scanf("%d",&num2);
	
	// Arithmetic operator
	printf("\nArithmetic Operations:\n");
    printf("Addition of %d + %d = %d\n",num1,num2,num1+num2);
    printf("Subtraction of %d - %d = %d\n",num1,num2,num1-num2);
    printf("Multiplication of %d * %d = %d\n",num1,num2,num1*num2);
    printf("Division of %d / %d = %d\n",num1,num2,num1/num2);
    printf("Modulus: %d %% %d = %d\n\n", num1, num2, num1 % num2);
    
    // Relational operator
    printf("\nRelational Operations:\n");
    printf("0 = False and 1 = true\n");
    printf("%d > %d: %d\n", num1, num2, (num1 > num2) );
    printf("%d < %d: %d\n", num1, num2, (num1 < num2) );
    printf("%d == %d: %d\n", num1, num2, (num1 == num2) );
    printf("%d != %d: %d\n", num1, num2, (num1 != num2) );
    printf("%d >= %d: %d\n", num1, num2, (num1 >= num2) );
    printf("%d <= %d: %d\n", num1, num2, (num1 <= num2) );
    
    // Logical operator

    printf("\n--- Logical Operations ---\n");
    printf("a && b: %d\n", num1 && num2);   // true if both non-zero
    printf("a || b: %d\n", num1 || num2);   // true if at least one is non-zero
    printf("!a: %d\n", !num1);           // true if a is zero
    printf("!b: %d\n", !num2);           // true if b is zero

}
