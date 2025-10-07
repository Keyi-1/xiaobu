//Ñ°ÕÒÍêÊı
#include <stdio.h>
#include <math.h>

int main(void)
{
    int fac;
    int sum=1;
    int num;
    int i=0,j=0;

    for(num=2;num<=1000;num++)
    {
        for(i=2;i<=sqrt((double)num);i++)
        {
            if(num%i==0)
            {
                sum+=i;
                if(num/i!=i)
                    sum+=num/i;
            }
        }

        if(sum==num)
        printf("%d\n",num);
        sum=1;
    }

    return 0;

}