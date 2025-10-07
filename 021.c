//º«ÐÅµç±ø
#include <stdio.h>

int main(void)
{
    unsigned int mi[10]={0},xi[10]={0};
    int number=1;
    int flag=1;
    int row;
    int i;

    scanf("%d",&row);

    if(row<=0)
    {
        printf("error");
        return 0;
    }
    
    for(i=0;i<row;i++)
    {
        if(scanf("%d%d",&mi[i],&xi[i])!=2)
        {
            printf("error");
            return 0;
        }
        if(mi[i] <= 0 || xi[i] <= 0 || xi[i] > mi[i])
        {
            printf("error");
            return 0;
        }
        if(xi[i]==mi[i]) xi[i]=0;
    }

    while(1)
    {
        flag = 1;
        for(i=0;i<row;i++)
        if(number%mi[i]!=xi[i])
        {
            flag=0;
            break;
        }

        if(flag)
        {
            printf("%d",number);
            break;
        }
        
        number++;
    }

    return 0;

}