#include<stdio.h>
#include<conio.h>

void main()
{

    int a[10],b[20],merge[30],i,j,s;
    printf("enter the value of first aaray");
    for(i=0; i< 5; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("enter the second array ");
    
        for(j=0; j<5; j++ );
    {

        scanf("%d",&a[j]);
    }
    printf(" merge two array \n");

for(i=0; i< 5; i++)
{
    merge[i]=a[i];
}

for (i =0,j=5;j<10&& i<5 ;i++,j++)
{
    merge[j]=b[i];
}
for ( i = 0; i < 10; i++)
{

printf("%d",merge[i]);

}

 }
