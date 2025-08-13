#include<stdio.h>
main()
{
	int num,sum=0,org,digi=0,rev=0;
	printf("Enter number :");
	scanf("%d",&num);
	
	org=num;
	
	while(num!=0)
	{
		digi = num % 10;
		sum = sum+digi;
		rev=rev * 10 +digi;
		num = num / 10;
		
	}
	printf("Sum of digits: %d\n", sum);
    printf("Reversed number: %d\n", rev);
}
