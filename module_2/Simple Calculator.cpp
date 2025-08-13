#include<stdio.h>
int main()
{
	char ch;
	float num1,num2;
	
	printf("Enter number 1 :");
	scanf("%f",&num1);
	printf("Enter number 1 :");
	scanf("%f",&num2);
	
	printf("\n\n\n");
	
	printf("press + for Addition \n");
	printf("press - for Subtraction \n");
	printf("press * for Multiplication \n");
	printf("press / for Division \n");
	
	printf("Enter your choees :");
	scanf(" %c",&ch);
	
	printf("\n\n\n");

	switch(ch)
	{
		case '+':
			{
				printf("%f + %f = %f",num1,num2,num1+num2);
				break;
			}
		case '-':
			{
				printf("%f - %f = %f",num1,num2,num1-num2);
				break;
			}
		case '*':
			{
				printf("%f * %f = %f",num1,num2,num1*num2);
				break;
			}
		case '/':
			{
				printf("%f / %f = %f",num1,num2,num1/num2);
				break;
			}
		default:
			{
				printf("\ninvelid hai bhai\n");
			}
				
	}
}
