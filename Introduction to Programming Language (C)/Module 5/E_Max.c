#include <stdio.h>
int main()
{

    int x;

    scanf("%d", &x);
    int N = 0;
    for (int i = 1; i <= x; i = i + 1)
    {
        int max;
scanf("%d", &max);
if (max>N){
    N=max;
}

    }
printf("%d",N);
return 0;
    }
