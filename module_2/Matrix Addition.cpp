#include<stdio.h>
main()
{
	int a[3][3],b[3][3],sum[3][3],multi[3][3];
	int size;
	printf("Enter size of matrix 2 or 3:");
	scanf("%d",&size);
	if(size<=3)
	{
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
		printf("enter element in arry a[%d][%d]: ",i,j);
		scanf(" %d",&a[i][j]);
		}
	}
	printf("\n\n");
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
		printf("enter element in arry b[%d][%d]: ",i,j);
		scanf(" %d",b[i][j]);
		}
	}
	printf("\n\n");
	printf("addition of matrix\n");
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
		sum[i][j]=a[i][j]+b[i][j];
		printf("%d  ",&sum[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
	printf("Multiplication of matrix\n");
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
		multi[i][j]=a[i][j]*b[i][j];
		printf("%d  ",multi[i][j]);
		}
		printf("\n");
	}
    }	
    else
    {
    	printf("Namak swad anusar matrix aukat anusar \n");
	}

	
}
