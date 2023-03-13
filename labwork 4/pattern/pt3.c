#include <stdio.h>
void main() 
{
    int n = 1;

    for (int i = 5; i >= n; i--) 
    {
        for (int j = 5; j >= 1; j--)
         {
            if (j <= i) {
        
                printf("%d ", j);
        
            } else {
        
                printf("  ");
        
            }
        
        }
        
        printf("\n");
    }

    
}
