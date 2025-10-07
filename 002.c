//判断是否为三角形
#include <stdio.h>

int main(void)
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a<=0||b<=0||c<=0)
    {
        printf("error");
    }
    else{
        if((a+b>c)&&(a+c>b)&&(b+c>a)){
            printf("yes");
        }
        else{
            printf("no");
        }
    }
    return 0;
}