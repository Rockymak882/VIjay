/* wap to find type of data */
#include <stdio.h>

void main()
{
    char c;
    printf("Press any Character = ");
    scanf("%c", &c);

    if (c>= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
    {
        printf("%c you enter a alphabet");
    }
    else if (c >= '0' && c <= '9')
    {
        printf("%c you enter a digit", c);
    }
    else
    {
        printf("%c  you enter a symbol");
    }
}
