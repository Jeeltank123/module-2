#include <stdio.h>
int fact(int n);
int main()
{
	int n;
	printf("enter no to find factorial :");
	scanf("%d",&n);
	
	printf("factorial of %d is = %d",n,fact(n));
}
int fact(int n)
{
	int fact=1;
	for(int i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	return fact;
}
