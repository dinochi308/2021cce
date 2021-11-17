#include <stdio.h>
int main()
{
    int n,ans=1;
    scanf("%d",&n);
    printf("2 ");
    for (int i=2;i<n;i++)
        for (int j=2;j<i;j++)
    {
        if (i % j==0)
        {break;}
        if (i==j+1)
        {ans++;
        printf("%d ",i);}
    }
    printf("\n Ans: %d \n",ans);
}
