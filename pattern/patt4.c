/* wap to print vivid patterns */
#include <stdio.h>

int main() {
    int i, j;

  
    for (i = 5; i >= 1; i--) 
    {
        for (j = 5; j >= i; j--)
         {
            printf("%d ", i);
        }
        for (j = 1; j <= 5 - 2*i; j++)
         {
            printf("  ");
        }
        for (j = i; j >= 1; j--)
         {
            printf("%d ", j);
        }
        printf("\n");
    }

   
    for (i = 5; i >= 1; i--) 
    {
        for (j = 5; j >= i; j--)
         {
            printf("%d ", i);
        }
        for (j = 1; j <= 10 - 2*i; j++) 
        {
            printf(" ");
        }
        for (j = i; j >= 1; j--) 
        {
            printf("%d", j);
        }
        printf("\n");
    }

}
