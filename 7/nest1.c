/* wap to find nest minimum number */
# include <stdio.h>
 
void main()
{
    int a, b, c, min ;
 
    printf("Enter three numbers : ") ;
 
    scanf("%d %d %d", &a, &b, &c) ;
 
    min = a < b ? (a < c ? a : c) : (b < c ? b : c) ;
 
    printf("\nThe smallest number is : %d", min) ;
}
