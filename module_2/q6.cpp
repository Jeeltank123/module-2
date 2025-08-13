#include<stdio.h>
int main()
{
	int i;
	
	printf(" * 1 to 10 usin for loop * \n");
	for(i=1;i<=10;i++)
	{
		printf("%d \n",i);
	}
	
	printf("\n * 1 to 10 usin do while loop * \n");
	i=1;
	do
	{
		printf("%d \n",i);
		i++;
	}while(i<=10);
	
	printf("\n * 1 to 10 usin while loop * \n");
	
	i=1;
	while(i<=10)
	{
		printf("%d \n",i);
		i++;
	}
}
