/* wap of ternary largest number of three */
#include<stdio.h>
#include<conio.h>

void main()

{
	int a,b,c,max;
	printf("enter three number = \n");
	scanf("%d%d%d",&a,&b,&c);
	
	max=a>b?a:(b>c?b:c);

	printf("largest number is= %d\n",max);



}