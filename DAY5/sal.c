/* wap of gross salary */
#include<stdio.h>
#include<conio.h>
void main()
{

int basic_salary,hra,ta,da,gross_salary,tax=200,pf;

printf("the basic_salary is=%f\n");
scanf("%d\n",&basic_salary);


hra=basic_salary*20/100;
ta=basic_salary*30/100;
da=basic_salary*10/100;

printf("the hra is =%f\n");
scanf("%d\n",&hra);

printf("the ta is =%f\n");
scanf("%d\n",&ta);

printf("the da is =%f\n");
scanf("%d\n",&da);

gross_salary=basic_salary+hra+da+ta;

printf("the gross_salry is=%f\n");

pf=gross_salary*10/100;
printf("the pf amount %f\n",pf);



}