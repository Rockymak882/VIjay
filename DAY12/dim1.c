#include <stdio.h>

int main()
{
    int n=5, c, k, space = 1;
    
    
    space = n - 1; 
    for (k = 1; k <= n; k++)
    {
    
        for (c = 1; c <= space; c++)
        printf(" ");
        
        space--;
        
        for (c = 1; c <= 2*k-1; c++)
        printf("*");
        
        printf("\n");    
    
    }    
  }