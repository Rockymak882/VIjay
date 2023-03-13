/* wap of subject marks and grade */
#include<stdio.h>
#include<conio.h>
void main()
{
	int math,guj,hind,eng,scince,social,sans,mark,grade;

	printf("enter math mark = ");
	scanf("%d\n",&math);
	printf("enter gujrati mark = ");
	scanf("%d\n",&guj);

	printf("enter hindi mark = ");
	scanf("%d\n",&hind);

	printf("enter english mark = ");
	scanf("%d\n",&eng);

	printf("enter science mark = ");
	scanf("%d\n",&scince);

	printf("enter social science mark = ");
	scanf("%d\n",&social);

	printf("enter any sanskrit mark = ");
	scanf("%d\n",&sans);

	grade=(math+guj+hind+eng+scince+social+sans)*10/700;
	
	printf("%d",grade);

switch (grade)
{
case 1 : 
	printf("a grade");
	break;
case 2:
	printf("b grade");
	break;
case 3:
	printf("c grade");
	break;
case 4:
	printf("d grade");
	break;
case 5 :
	printf("e grade");
	break;
default :
	printf("f fail..");
	break;


}





	}