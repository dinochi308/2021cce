#include <stdio.h>
int main()
{
	int a,b,c,t;
	scanf("%d%d%d",&a,&b,&c);
	if(a>c){
		t=a;
		a=c;
		c=t;
		}

	if(b>c){
		t=b;
		b=c;
		c=t;
		}
		if (a+b<=c) printf("¿ù»~");
		else if (a*a+b*b==c*c) printf("ª½¨¤");
		else if (a*a+b*b>c*c) printf("¾U¨¤");
		else if (a*a+b*b<c*c) printf("¶w¨¤");
}
