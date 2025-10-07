//ºï×ÓÕªÌÒ
#include <stdio.h>

int number_of_peach(int day);

int main(void)
{
    //int sum;
    
    printf("%d,",number_of_peach(9));
    printf("%d,",number_of_peach(8));
    printf("%d,",number_of_peach(7));
    printf("%d,",number_of_peach(6));
    printf("%d,",number_of_peach(5));
    printf("%d,",number_of_peach(4));
    printf("%d,",number_of_peach(3));
    printf("%d,",number_of_peach(2));
    printf("%d,",number_of_peach(1));
    printf("%d",number_of_peach(1));

    return 0;
}
int number_of_peach(int day)
{
    if (day==10)
    return 1;
    else
        return((number_of_peach(day+1)+1)*2);
}
