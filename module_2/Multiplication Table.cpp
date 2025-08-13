#include<stdio.h>
main()
{
	int num,n;
	printf("Enter no to print table :");
	scanf("%d",&num);
	printf("input the range of the multiplication table :");
	scanf("%d",&n);
	
	for(int i=1; i<=n;i++)
	{
		printf("%d * %d = %d \n",num,i,num*i);
	}
}
