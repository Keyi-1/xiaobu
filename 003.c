//密码（大小写转换）
#include <stdio.h>

int main(void)
{
    char code[21];
    int i=0,add=4;

    scanf("%20s",code);

    if(code[0]=='\0')
    {
        printf("error");
        return 0;
    }
    
    while(code[i]!='\0')
    {
        if((code[i]>=65&&code[i]<=90)){
            code[i]=(code[i]+add-65)%26+65;
            i++;
        }
        else if (code[i]>=97&&code[i]<=122)
        {
            code[i]=(code[i]+add-97)%26+97;
            i++;
        }
        
        else{
            printf("error");
            return 0;
        }
    }
    printf("%s",code);
    return 0;
}