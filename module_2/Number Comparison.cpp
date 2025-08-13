#include<stdio.h>
int main()
{
	int num1,num2,num3;
	
	for(int i=1;i<=3;i++)
	{
		
		printf("enter no:");
		switch(i)
		{
		case 1:
			{
			  scanf("%d",&num1);
			  break;
			}
		case 2:
			{
			  scanf("%d",&num2);
			  break;
			}
		case 3:
			{
			  scanf("%d",&num3);
			  break;
			}
     	}
	}

    if(num1>num2 && num1>num3)
    {
    	printf("%d is bigger than all\n",num1);
	}
	else if(num2>num1 && num2>num3)
    {
    	printf("%d is bigger than all\n",num2);
	}
	else
	{
		printf("%d is bigger than all\n",num3);
	}
	
	if(num1<num2 && num1<num3)
    {
    	printf("%d is smaller than all\n",num1);
	}
	else if(num2<num1 && num2<num3)
    {
    	printf("%d is smaller than all\n",num2);
	}
	else
	{
		printf("%d is smaller than all\n",num3);
	}
}
