//输出有星号组成的三角形
#include <stdio.h>

int main(void)
{
    int side,i,j;
    
    scanf("%d",&side);

    if(side>=1&&side<80&&side%2==1){
        for(i=1;i<=side;i+=2)
        {
            for(j=0;j<(side-i)/2;j++)
            printf("%c",' ');
            for(j=0;j<i;j++)
            printf("%c",'*');
            printf("\n");
        }
    }
    else 
    printf("error");

    return 0;
}
/*#include<stdio.h> 
int main()
{
    int a,line,i,j;
    scanf("%d",&a);
    if(a%2==0||a<1||a>80) printf("error\n");
    else
    {
        line=(a+1)/2;
        for(i=1;i<=line;i++)
        {
            for(j=1;j+i<=line;j++) printf(" ");
            for(j=1;j<i*2;j++) printf("*");
            printf("\n");
        }
    }
    return 0;
}*/