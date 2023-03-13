/* wap to use if statment */
#include <stdio.h>

void main()
{
    int a,b,c,d;
    printf("Enter any number to find max number  = ");
    scanf("%d %d %d %d", &a,&b,&c,&d);

    if (a > b)
    {
       
        if (a > c)
     

        {
               if (a > d)
            {
                printf("%d this is the  maximum number", a);
            }
        }
    }
             else if (b>c)
    {
             if (b>d)
        {
             printf("%d this is the maximum number", d);
        }
    }
             else if (c>d)
    {
           printf("%d this is the maximum number", c);
     }
            else
     {
        printf("%d this is the maximum number", d);
    }
}