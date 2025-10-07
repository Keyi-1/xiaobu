//╩ьнд
#include <stdio.h>
#include <string.h>

int main(void)
{
    char c[31];
    int i;
    int len;

    scanf("%s",c);

    len=strlen(c);
    for(i=0;i<len/2;i++)
    {
        if (c[i]!=c[len-1-i])
        {
            printf("false");
            return 0;
        }
    }

    printf("true");
    
    return 0;
}