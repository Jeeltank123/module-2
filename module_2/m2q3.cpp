//Write a C program that includes variables, constants, and comments. Declare 
//and use different data types (int, char, float) and display their values. 
#include<stdio.h>
main()
{
	// Declare variables of different data types
    int age;    
    char grade;
    float marks;
    
    // Declare constants
    const int MAX_AGE = 50; 
    const float PI = 3.14; 
    
    // Assign values to the variables

    age = 20;
    grade='A';
    marks=86.69;
    
    // Display the values of the variables
    
    printf("age of student is :%d\n",age);         // Display age
    printf("grade of student is :%c\n",grade);     // Display grade 
    printf("marks of student is :%f\n\n",marks);     // Display marks
    
    // Display the values of the constants variables
    
    printf("Age limit is :%d\n",MAX_AGE);     // Display MAX_AGE 
    printf("PI value is :%f\n",PI);           // Display value of PI
}
