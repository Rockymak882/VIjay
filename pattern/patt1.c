/* wap to print number as pattern */
#include<stdio.h>
int main()
{
  int i,j;
  for(i=1;i<=5;i++)
  {
    printf("\n");
    for(j=1;j<=i;j++)
    {
      printf(" ");
    }
    for(j=1;j<=(5-i+1);j++)
    {
      printf("%d",j);
    }
  }
  return 0;
}