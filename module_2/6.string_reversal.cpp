//Write a C program that takes a string as input and reverses it using a function.
//? Challenge: Write the program without using built-in string handling functions.
#include <stdio.h>
#include<string.h>
void reverseString(char str[]); 
int main() 
{
    char str[100];
    printf("Enter Anything: ");
    scanf("%s",&str);  
    
    reverseString(str);
    
    printf("Reverse string: %s\n",str);
    return 0;
}


void reverseString(char str[]) 
{
   int start = 0;
   int end = strlen(str)-1;
   char temp;
   while(start<end)
   {
   	temp=str[start];
   	str[start]=str[end];
   	str[end]=temp;
   	start++;
   	end--;
   }
    
}
