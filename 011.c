//2��k�η�С��m��k�����ֵ

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