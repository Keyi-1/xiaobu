//????
#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    int i;
    int flag=0;

    scanf("%d",&num);
    
    if(num<=3) {printf("error");return 0;}
    
    if(num%2==0) {printf("no");return 0;}

    if(num%3==0) {printf("no");return 0;}

    //if(num==2147483647) {printf("yes");return 0;}
    
    for(i=5;i<=sqrt((double)num);i+=2)
    {
        if(num%i==0){
            printf("no");
            flag=1;
            break;
        }
    }
    if (flag==0)
    {
        printf("yes");
    }

    return 0;

}