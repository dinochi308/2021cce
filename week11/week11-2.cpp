#include <stdio.h>
int a[10000000];
int main()
{
    printf("請問你想給幾個質數?");
    int m,ans=0;
	scanf("%d",&m);
	for(int i=2; ans<m ;i++){
		if(a[i]==0){
			ans++;
			printf("%d ",i);
			}
			for(int k=i+i;k<10000000;k+=i){
			a[k]=1;
			}
		}
		///printf("%d\n",ans);
	}
