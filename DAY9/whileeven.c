/* wap to find even number with loop  */
#include<stdio.h>
void main()
{
	int number;
	number=1;
	while(number<=10)
	{
		if(number%2==0)
		{
			printf("%d\n",number );
			number++;
		}
	}
}