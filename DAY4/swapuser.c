/* wap to get value from user input and than swap numbers */
#include<stdio.h>
#include<conio.h>
void main()
{
    float a,b,c;
    printf("this is the value of a =");
    scanf("%f\n",a);
    printf("this is the value of b =");
    scanf("%f\n",b);

    c=a;
    a=b;
    b=c;
    printf("this is the value of a= %f\n",a);
    scanf("%f\n",a);

    printf("this is the value of b= %f\n",b);
    scanf("%f\n",b);
}
