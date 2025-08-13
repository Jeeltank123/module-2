#include<stdio.h>
main()
{
	int num;
	printf("Insert any number :");
	scanf("%d",&num);
	
	if(num % 2 ==0)
	{
		printf("Number is even\n");
	}
	else
	{
		printf("Number is odd\n");
	}
	
	if(num<0)
	{
		printf("Number is negative\n");
	}
	else if(num>0)
	{
		printf("Number is positive\n");
	}
	else
	{
		printf("It is an zero\n");
	}
    if (num % 3 == 0 && num % 5 == 0)
	{
        printf("number is a multiple of both 3 and 5 \n");
    } else
	{
        printf("number is not a multiple of both 3 and 5 \n");
    }
}
