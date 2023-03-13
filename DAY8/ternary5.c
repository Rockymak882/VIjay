/*wap to find largest number amogng 5 numbers*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d,e,max;
	printf("enter any five numers = \n");
	scanf("%d,%d,%d,%d,%d",&a,&b,&c,&d,&e);

	max=a>b && a>c  && a>d && a>e ? a: (b>c && b>d && b>e )? b: (c>d && c>e )?c: (d>e)?d:e;

	printf("the largest number is =%d\n",max);





}