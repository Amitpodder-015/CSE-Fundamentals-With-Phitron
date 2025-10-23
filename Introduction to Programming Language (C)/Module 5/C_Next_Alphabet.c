#include <stdio.h>
int main()
{

    char x;

    scanf("%c", &x);
    if (x == 'z')
    {
        char y = 'a';
        printf("%c", y);
    }
    else
    {
        printf("%c", x=x+1);
    }
    return 0;
}
