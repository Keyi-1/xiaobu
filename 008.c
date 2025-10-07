//?????

#include <stdio.h>
int main(void)
{
    int num;
    int i,j;
    int pro=1;
    int sum=0;
    
    scanf("%d",&num);

    if(num>=1&&num<=10){
        for(j=num;j>0;j--){
            pro=1;
            for(i=j;i>0;i--){
                pro=pro*i;                
            }
            sum=sum+pro;
            //printf("%d\n",sum);
        }
        printf("%d\n",sum);
    }

    else
    printf("error");

    return 0;
}