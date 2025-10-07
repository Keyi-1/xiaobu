//Fibonacci

#include <stdio.h>
int main(void)
{
    int month,n;
    int i=1,j=0,k=1,l;

    scanf("%d",&month);

    while(k<month)
    {
        l=i+j;
        j=i;
        i=l;
        k++;
    }

    n=i;
    printf("%d",n);

    return 0;
}