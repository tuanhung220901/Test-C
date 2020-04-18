#include<stdio.h>
int max(int a, int b, int c)
{
	int max=a;
	if(b>max) max=b;
	if(c>max) max=c;
	return max;
}
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	printf("%d",max(a,b,c));
	return 0;
}
