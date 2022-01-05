#include <stdio.h>
int main()
{
    int N=123456789;
    int sum=0;
    while (N >0) {
    sum += N%10;
    N = N/10;
    }
    printf("%d\n",sum);
}




