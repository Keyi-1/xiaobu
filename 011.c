//2的k次方小于m的k的最大值

#include <stdio.h>
#include <math.h>

int main()
{
    unsigned int m,i=0;

    scanf("%u",&m);
    while(pow(2,(double)i)<=m)
    {i++;}
    
    printf("%u",i-1);

    return 0;
}