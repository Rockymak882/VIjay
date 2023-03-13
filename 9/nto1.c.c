#include <stdio.h>

void main()
{
    int i, n;

    
    printf("Print all natural numbers up too : ");
    scanf("%d", &n);

   
    i=n;
    while(i>=1)
    {
        printf("%d\n", i);
        i--;
    }

    
}