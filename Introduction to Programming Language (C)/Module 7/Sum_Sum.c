//
#include <stdio.h>
int main()
{
    int N;
    scanf("%d ", &N);
    int ar[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &ar[i]);
    }
    int SUM = 0;
    for (int i = 0; i < N; i++)
    {

        if (ar[i] > 0)
        {

            SUM = SUM + ar[i];
        }
    }
    int sum2 = 0;
    for (int i = 0; i < N; i++)
    {

        if (ar[i] < 0)
        {

            sum2 = sum2 + ar[i];
        }
    }

    printf("%d %d", SUM, sum2);
    return 0;
}