#include <stdio.h>

void main()
 {
    int n = 5;

    for (int i = n; i >= 1; i--)
   
     {
        for (int j = 1; j <= n; j++)
        
         {
            if (j <= i) 
            {
                printf("%d ", j);
            } else 

            {
                printf("  ");
            }
       
        }
       
        printf("\n");
    }

    

}