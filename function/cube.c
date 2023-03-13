#include<stdio.h>
#include<conio.h>
#include<string.h>
int main() 
{
   int num;
   printf("Enter a Number: ");
   scanf("%d", &num);
   
   printf("The cube of Number %d is %d", num, cube(num));
   	
}
int cube(int num)
{
	return num* num*num;
}