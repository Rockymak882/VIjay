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
		printf("%d\n", i);
		i++;
	}

	while(i <= n);

	printf("\n");
}