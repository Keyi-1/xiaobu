//??????

#include <stdio.h>
int main(void)

{
    char string[21];
    int i=0;
    string[20]='\0';

    scanf("%s",string);

    while(string[i]!='\0')
    {
        if(string[i]>=97&&string[i]<123){
            string[i]=string[i]-32;
            i++;
        }
        else
        i++;
    }

    string[i]='\0';

    printf("%s\n",string);
    
    return 0;
}

