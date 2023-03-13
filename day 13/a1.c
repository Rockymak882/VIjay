#include<stdio.h>

void main()
{
    int arr[5], i;

    for(i = 0; i < 5; i++)
    {
        printf("Enter a[%d]: ", i);
        scanf("%d", &arr[i]);
    } 

    printf("Printing elements of the array: \n");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

}

