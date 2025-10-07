//输出1~N以内的所有素数
#include <stdio.h>
#include <math.h>

int main(void)
{
    int num;
    int i,j;
    int flag=1;//flag=0表示不是质数，flag=1表示是质数
    
    if(scanf("%d",&num)!=1)
    {
        printf("error");
        return 0;
    }
    
    if(num>1&&num<=200)
    {
        for(i=2;i<=num;i++)
        {
            flag=1;
            for(j=2;j<=sqrt((double)i);j++)
            {
                if(i%j==0)
                {flag=0;break;}
            }
            if(flag==1){printf("%d,",i);}
        }
    }
    else
    {
        printf("error");
    }

    return 0;
}