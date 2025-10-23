#include <stdio.h>
int main(){
    // {

    //     char X;
    //     scanf(" %c", &X);
    //     if (X >= 'a' && X <= 'z')
    //     {

    //         printf(" %c", X - 32);
    //     }
    //     else
    //     {

    //         printf(" %c", X + 32);
    //     }
    //     return 0;
    // }

    char ch;
scanf("%c",&ch);

    if (ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;
        printf("%c",ch);
    }
    else
    {
        ch = ch + 32;
        printf("%c",ch);
    }
    return 0;
}
