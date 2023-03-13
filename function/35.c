#include<stdio.h>
#include<conio.h>

void main()
{
  int a;
  printf("enter the value");
  scanf("%d",&a);

  div (a);
}
int div(int i)
{
  if (i % 3 == 0 && i % 5 == 0)
  {
    printf("this is divide by 3 & 5");
  }
  else
  {
    printf("this is not divide by 3 & 5");
  }
}
 