#include <stdio.h>
int main ()
{
    int a=999;
    int b=100;
    int t;

    printf("a:%d b:%d\n",a,b);
    t=a;
    a=b;
    b=t;
    printf("a:%d b:%d",a,b);
}
