//这是一个计算还款月份的作业
#include <stdio.h>
#include <math.h>

int main(void)
{
    int d=300000,p=6000,g,i;
    float r=0.01,m;
    float top,but;

    top=log10(p/(p-d*r));
    but=log10(1+r);
    
    i=top/but*100;
    g=i%10;

    if(g>=5)
    {
        m=(i+10)/100;
    }
    else
    m=i/100;
    printf("m=%.1f",m);

    return 0;

}

