#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
 
    long long int  ar[N];
    for (int i = 0; i < N; i = i + 1)
    {
        scanf("%lld", &ar[i]);
    }
    long long int SUM = 0;
    for (int i = 0; i < N; i = i + 1)
    {
        SUM = SUM + ar[i];
    }
    if (SUM >= 0)
    {
        printf("%lld", SUM);
    }
    else
    {
        printf("%lld", SUM / -1);
    }
    return 0;
}
