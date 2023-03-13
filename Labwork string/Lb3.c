#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <ctype.h>

void title_case(char str[]);
int main(void)
{
    char sentence[] = "this is a sentense.";
    title_case(sentence);
    printf("%s", sentence);
    return 0;
}