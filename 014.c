//??pi

#include <stdio.h>

int main()
{
    float target,add=1,sum=1;
    float i=1,j=3,k,l=1;

    scanf("%f",&target);
    do{
        add*=i/j;
        i+=1;j+=2;
        sum=sum+add;
    }
    while(2*add>target);

    printf("%.6f",2*sum);

    return 0;
}