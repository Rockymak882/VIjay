/* wap to find perimeter circle */ 
#include <stdio.h>
#include<conio.h>
#define PI 3.14f 

void main() {
 
  float redius,perimeter,area;

 
  printf("Enter redius of the Circle:\n");
  scanf("%f", & redius);

 
  perimeter = 2 * PI * redius;
  printf("this is the perimeter of circle: %0.4f\n", perimeter);

  
}
