/* wap to use do while loop */
#include<stdio.h>

void main()
{
	int i, n;

	printf("Enter the value of n");
	scanf("%d",&n);

	i = 1;
	do
	{
		printf("%d\n", n);
		n++;
	}

	while(i <= n);

	printf("\n");
}