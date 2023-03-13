#include <stdio.h>

void main() 
{
    int n;
    printf("Enter the size of the 2D array: ");
    scanf("%d", &n);

    
    int array[n][n];
    
    printf("Enter the elements of the 2D array:\n");
    
    for (int i = 0; i < n; i++) 
    {
        
        for (int j = 0; j < n; j++) 
        {
            scanf("%d", &array[i][j]);
        }
    }

    
    printf("the 2d aaray :\n");
    
    for (int i = 0; i < n; i++) 
    {
    
        for (int j = 0; j < n; j++)
         {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

}
