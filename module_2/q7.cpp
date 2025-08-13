
#include<stdio.h>
int main()
{
	int i;
	printf("stop program at 5 using break \n",i);
	for(i=1;i<=10;i++)
	{
		if(i==5)
		{
			break;
		}
		printf("%d \n",i);
	}
	printf("\n skip no 3 in program using continue \n",i);

	
	for(i=1;i<=10;i++)
	{
		if(i==3)
		{
			continue;
		}
		printf("%d \n",i);
	}
    return 0;
}
