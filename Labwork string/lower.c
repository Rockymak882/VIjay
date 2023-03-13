#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char str[50]; 
    printf("Enter any String: ");  
    gets(str);
    printf("this is the lowercase = %s", strlwr(str));
    getch();

}