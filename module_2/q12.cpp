#include<stdio.h>
#include<string.h>

struct student
{
	char name[100];
	
	int roll;
	float Marks;
	
};
int main()
{
	struct student stud[3];
	
	for(int i=0;i<1;i++)
	{
		printf("Name: ");
        scanf("%s", &stud[i].name);
        printf("Roll Number: ");
        scanf("%d", &stud[i].roll);
        printf("Marks: ");
        scanf("%f", &stud[i].Marks);
        printf("\n");
	}	
	for(int i=0;i<1;i++)
	{
		printf("Name: %s \n",stud[i].name);
		printf("Roll Number: %d\n",stud[i].roll);
        printf("Marks: %f\n",stud[i].Marks);
        printf("\n");

	}
	return 0;

    
}
