/* wap to use ladder if */
#include <stdio.h>
#include<conio.h> 
void main()
{
    int A;
 
    printf("Enter the number A: ");
    scanf("%d", &A);
 
    if (A > 0)
        printf("%d is positive.", A);
    else if (A < 0)
        printf("%d is negative.", A);
    else if (A == 0)
        printf("%d is zero.", A);
 
    
}