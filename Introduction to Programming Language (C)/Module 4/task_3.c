#include <stdio.h>
int main()
{
    int X;
    scanf("%d",&X);
    int check = X / 1000;
    if (check % 2 == 0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }

    return 0;
}
