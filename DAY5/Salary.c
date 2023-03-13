/* wap of gross salary */
#include<stdio.h>
#include<conio.h>
void main()
{

float basic_salary=50001,hra,ta,da,gross_salary,tax=200,pf;

printf("the basic_salary is=%f\n",basic_salary);

hra=basic_salary*20/100;
ta=basic_salary*30/100;
da=basic_salary*10/100;


printf("the hra is =%f\n",hra);
printf("the ta is =%f\n",ta);
printf("the da is =%f\n",da);

gross_salary=basic_salary+hra+da+ta;

printf("the gross_salry is=%f\n",gross_salary);

pf=gross_salary*10/100;
printf("the pf amount %f\n",pf);



}