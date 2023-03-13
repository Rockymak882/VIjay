/* wap to print n to 10*/
#include <stdio.h>

void main()
{
    int i, n;

    
    printf("enter number  : ");
    scanf("%d", &n);

   
    i=1;
    while(i<=n)
    {
        printf("%d\n", i);
        i++;
    }

    
}