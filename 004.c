//��С��Լ������С������
#include <stdio.h>

int main()
{
    int a,b;
    int i;
    int min,max;
    int lcm,gcd;//lcmΪ��С��������gcdΪ���Լ��
    
    scanf("%d %d",&a,&b);
    
    if (a==b) lcm=gcd=a;
    
    else if (a<b) {min=a;max=b;}
    else {min=b;max=a;}

    for(i=min;i>0;i--)
    {
        if(a%i==0&&b%i==0){
            gcd=i;
            break;}
    }

    for(i=max;i<=a*b;i++)
    {
        if(i%a==0&&i%b==0){
            lcm=i;
            break;
        }
    }

    printf("%d,%d",gcd,lcm);

    return 0;
}