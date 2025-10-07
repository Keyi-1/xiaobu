//分别统计字母和数字个数
#include <stdio.h>
int main(void)
{
    char string;
    int num_a=0,num_1=0;//num_a表示字母个数，num_1表示数字个数
    
    while((string=getchar())!='\n')
    {
        if((string>='a'&&string<='z')||(string>='A'&&string<='Z'))
        {
            num_a+=1;
        }
        if(string>='0'&&string<='9')
        {
            num_1+=1;
        }
    }

    printf("letters:%d,digits:%d",num_a,num_1);
    
    return 0;
}