#include <stdio.h>
int main()
{

    int N;
    scanf("%d", &N);
    for (int i = 1; i <= 12; i = i + 1)
    {

        int muit = N * i;
        printf("%d * %d = %d\n", N, i, muit);
    }

    return 0;
}
