//�ֱ�ͳ����ĸ�����ָ���
#include <stdio.h>
int main(void)
{
    char string;
    int num_a=0,num_1=0;//num_a��ʾ��ĸ������num_1��ʾ���ָ���
    
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