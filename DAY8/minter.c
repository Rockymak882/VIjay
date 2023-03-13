/*wap to find min number amogng 5 numbers*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d,e,min;
	printf("enter any five numers = \n");
	scanf("%d,%d,%d,%d,%d",&a,&b,&c,&d,&e);

	min=a<b && a<c  && a<d && a<e ? a: (b<c && b<d && b<e )? b: (c<d && c<e )?c: (d<e)?d:e;

	printf("the smaller number is =%d\n",min);





}