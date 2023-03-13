/* wap to find leap year */
#include<stdio.h>
#include<conio.h>

void main()

{
	int leap,year;

	printf("enter year to get your answer =");
	scanf("%d",&year);

	if(year%4==0)
	{

		printf("yes this is the leap year ");

	}else{
		printf("no this is not leap year");
	}
}