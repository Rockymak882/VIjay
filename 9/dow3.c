/* wap to use do while loop */
#include <stdio.h>
int main ()
{
 int sum=0,i=1,n;

printf("enter the number");
scanf("%d",&n);

 do
  {
   sum=sum+i;
   i++; 
  }
  while(i <= n); 
 
 printf("this is the answer = %d",sum);
 
}
