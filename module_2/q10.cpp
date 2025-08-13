#include<stdio.h>
main()
{
	int age=20;
	int *ptr=&age;

	printf("velue of ptr is %d\n",*ptr);
	*ptr=10;
	printf("\nvelue of ptr after update is %d\n",*ptr);
		
}

