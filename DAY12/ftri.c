/* wap to pattern tri star */
#include<stdio.h>
#include<conio.h>

void main()
{

    int i,j;

            for (i = 1; i <=5; ++i)
     {
            
            for (j = 1; j<=i; ++j)
                if((i==2&&j==2))
                {
                printf("");
                }else
                {
             
                 printf("*");
               }
            printf("\n");
    }





}