/* C Program to Remove All Duplicate Character in a String */
 
#include <stdio.h>
#include <string.h>
 
void main()
{
  	char str[50];
  	int i, j, k;
 
  	printf("\n Enter any String :  ");
  	gets(str);
  	 	
  	for(i = 0; i < strlen(str); i++)
  	{
  		for(j = i + 1; str[j] != '\0'; j++)
  		{
  			if(str[j] == str[i])  
			{
  				for(k = j; str[k] != '\0'; k++)
				{
					str[k] = str[k + 1];
				}
 			}
		}
	}
	
	printf("\n The Final String after Removing All Duplicates = %s ", str);
	
}