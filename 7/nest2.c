/* wap to find nest minimum number */
# include <stdio.h>
 
void main()
{
    int a,b,min ;
 
    printf("Enter any numbers : ") ;
    scanf("%d ", &a ) ;
    printf("Enter second numbers : ") ;
    scanf("%d ", &b ) ;
 
    min= a<b ?a:b; 
    printf("\nThe minimum number is : %d", min) ;
}
