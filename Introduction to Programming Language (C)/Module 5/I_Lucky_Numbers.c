#include <stdio.h>
int main()
{

    int N;
    scanf("%d", &N);
    int x = N / 10;
    int y = N % 10;
    if (y == 0)
    {
        printf("YES");
    }
    else if (x % y == 0)
    {
        printf("YES\n");
    }

    else
    {
        printf("NO");
    }
    return 0;
}
