#include<stdio.h>
int sum(int n)
{
	int sum = 0;
	for(int i = 1;i < n;i++)
	{
		if(n%i==0) sum+=i;
	}
	if(sum==n) return 1;
	return 0;
}
int main()
{
	int n;
	scanf("%d",&n);
	if(sum(n)) printf("1");
	else printf("0");
}
