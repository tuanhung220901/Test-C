#include<stdio.h>
int main()
{
	int n, f0 = 0,f1 = 1,f = 0;
	scanf("%d",&n);
	printf("0 1 ");
	for(int i=3;i<=n;i++)
	{
		f=f0+f1;
		f0=f1;
		f1=f;
		printf("%d ",f);
	}
}
