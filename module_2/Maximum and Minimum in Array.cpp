#include<stdio.h>
main()
{
	int num[9];
	
    for(int i=0;i<10;i++)
    {
    	printf("enter number of array num[%d] : ",i);
    	scanf("%d",&num[i]);
	}
	printf("\n\n");
	
    int max = num[0];
    int min = num[0];
    
    for (int i = 1; i < 10; i++)
	 {
        if (num[i] > max) 
		{
            max = num[i];
        }
        if (num[i] < min) 
		{
            min = num[i];
        }
    }
    printf("Maximum num in arry is: %d\nMinimum num in arry is: %d\n",max,min);
    
    for (int i = 0; i < 10 - 1; i++) 
	{
        for (int j = i + 1; j < 10;j++) 
		{
            if (num[i] > num[j]) 
			{
                int temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }
    printf("Sorted array in ascending order:\n");
    for (int i = 0; i < 10; i++)
	{
        printf("%d ", num[i]);
    }
}
