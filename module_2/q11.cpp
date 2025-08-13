#include<stdio.h>
#include<string.h>
main()
{
	char str1[20],str2[20];
	
	printf("enter in string 1:");
	fgets(str1,20,stdin);
	printf("enter in string 2:");
    fgets(str2,20,stdin);	
	
	strcat(str1,str2);
    puts(str1);
    
    printf("length of concatenated string %d",strlen(str1)-2);

}
