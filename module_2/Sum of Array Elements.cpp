#include<stdio.h>
main()
{
	int arr[1000];
	int size,sum=0;
	float avg;
	printf("Enter size of arry element :");
	scanf("%d",&size);
	for(int i=0;i<size;i++)
	{
		printf("Enter value in a[%d]:",i);
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<size;i++)
	{
	   sum=sum+arr[i];
	   avg=i+1;
	}
	avg=sum/avg;
	printf("sum of arry element is :%d\n",sum);
	printf("avrage of arry element is :%f",0avg);

	
}
