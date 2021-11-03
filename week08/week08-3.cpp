#include <stdio.h>
int main()
{
    for(int n=2; n<=100; n++){
        int b=0;
        for(int i=2;i<n;i++){
            if(n%i==0) b=1;
        }
        if (b==0) printf("%d ",n);
    }
}
