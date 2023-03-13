/* wap of ternary largest number of four */
#include<stdio.h>
#include<conio.h>

void main()

{
	int a,b,c,d,max;
	printf("enter four number = \n");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	
	max=a>b?a:(b>c)?b:(c>d)?c:d;

	printf("largest number is= %d\n",max);










}