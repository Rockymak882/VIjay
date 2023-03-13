/* wap to find even or odd number */
#include<stdio.h>
#include<conio.h>

void main()
{
         int number;
         printf("Enter number = ");
         scanf("%d",&number );

         (number%2==0)?printf("%d this is the  even number",number):printf("%d this is the odd number",number);
}