#include<stdio.h>
int giaithua(int n){
	int t = 1;
	for(int i=1;i<=n;i++)
	{
		t=t*i;
	}
	return t;
}
int xuly(int n)
{
	int r,sum=0,a=n;
	while(n){
		r=n%10;
		sum=sum+giaithua(r);
		n/=10;
	}
	if(sum==a) return 1;
	return 0;
}
int main()
{
	int n;
	scanf("%d",&n);
	if(n < 1){
		printf("0");
		return 0;
	}
	if(xuly(n)) printf("1");
	else printf("0");
	return 0;
}
