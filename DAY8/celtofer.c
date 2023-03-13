/* wap to exchange value of celsius into fahrenheit */
#include<stdio.h>
#include<conio.h>

void main()

{
	float celsius,fahrenheit;

	printf("how much celsius temprature = \n",celsius);
	scanf("%f",&celsius);

	fahrenheit=(1.8*celsius)+32;

	printf(" this is the fahrenheit %f\n",fahrenheit);
	

}