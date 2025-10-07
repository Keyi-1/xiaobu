//计算e的x次方
#include <stdio.h>
#include <math.h>

int main()
{
    double e_x,x,n;
    int i,j;
    double step;

    e_x=1;
    //step=1;
    scanf("%lf %lf",&x,&n);

    if(n<0)
    {printf("error");}

    else{
        for(i=1;i<=(int)n;i++)
        {
            step=1;
            for(j=1;j<=i;j++)
            {
                step=step*j;
            }
            e_x=e_x+pow(x,i)/step;
        }

        printf("%.6f",e_x);
    }

    return 0;
}