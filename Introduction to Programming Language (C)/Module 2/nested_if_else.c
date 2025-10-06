#include <stdio.h>
int main()
{
    int taka;
    scanf("%d", &taka);
    if (taka >= 5000)
    {

        printf("Coxbazar jabo");
        if (taka >= 10000)
        {
            printf("cox bazar o jabo");
        }
        else
        {
            printf("ferot or return hobo");
        }
    }
    else
    {
        printf("Coxbazar jabo na ");
    }
    return 0;
}
