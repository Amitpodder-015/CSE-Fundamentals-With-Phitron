// #include <stdio.h>
// int main()
// {

//     int N;
//     scanf("%d", &N);
//     for (int i = 2; i <= N; i = i + 2)
//     {

//         printf("%d\n", i);
//     }
//     if (N < 2)
//     {
//         printf("%d\n", -1);
//     }
//     return 0;
// }
#include <stdio.h>
int main()
{

    int N;
    scanf("%d", &N);
    for (int i = 1; i <= N; i = i + 1)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
        else if (N <= 2)
        {
            printf("%d\n", -1);
        }
    }
    return 0;
}
