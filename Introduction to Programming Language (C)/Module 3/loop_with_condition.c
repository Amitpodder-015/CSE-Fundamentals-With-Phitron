// #include<stdio.h>
// int main(){
// int N;
// scanf("%d",&N);
// if(N%2==0){
//     printf("even number");

// }
// else{
//     printf("odd number");

// }

// return 0;

// }
#include <stdio.h>
int main()
{
    for (int i = 1; i <= 11; i = i + 1)
    {
        if (i % 2 == 0)
        {
            printf(" even number =%d\n",i);
        }
        else
        {
             printf(" oddd number =%d\n",i);
        }
    }
    return 0;
}