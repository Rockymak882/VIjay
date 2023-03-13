/* wap of swap number and get value from user to swap number */
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	printf("this is the value of a= %d\n",a);
	scanf("%d\n",&a);
	printf("this is the value of b= %d\n",b);
	scanf("%d\n",&b);

	c=a;
	a=b;
	b=c;
	printf("this is the value of c= %d\n",c);	
	scanf("%d\n",&c);



	
}