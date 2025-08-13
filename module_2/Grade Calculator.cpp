#include<stdio.h>
main()
{
	int Marks;
	printf("Insert any number :");
	scanf("%d",&Marks);
	
	if(Marks > 90)
	{
		printf(" Grade A ");
	}
	else if(Marks > 75 && Marks <= 90)
	{
		printf(" Grade B ");
	}
	else if(Marks > 50 && Marks  <= 75)
	{
	
		printf(" Grade c ");
	}
	else
	{	
		printf(" Grade d ");
	}
}
