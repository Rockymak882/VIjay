/* wap to find 5 min */
#include<stdio.h>

void main()
{
  
   int a,b,c,d,e,min;

   printf("Enter five number\n");
   scanf("%d %d %d %d %d",&a,&b, &c, &d, &e);

 
  min = ( (a<b && a<c && a<d && a<e) ? a : (b<c && b<d && b<e) ? b :(c<d && c<e)? c : (d<e)? d : e );

 
   printf("smalest Number is : %d",min);

}