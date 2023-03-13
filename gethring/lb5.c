#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char n[100];
    printf("Enter lowercase String = ");
    gets(n);
    printf("\nIts Uppercase = %c", strupr(n));
    getchar();

}