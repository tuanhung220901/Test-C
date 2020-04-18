#include<stdio.h>
int tich(int n,int r)
{
	int tich = 1;
	for(int i=1;i<=n;i++)
	{
		tich*=r;
	}
	return tich;
}
int kt(int n)
{
	int sum = 0, x = n, r = 0, dem = 0;
	while(x){
		dem++;
		x/=10;
	}
	int z = n;
	while(z){
		r = z % 10;
		sum+=tich(dem,r);
		z/=10;
	}
	if(sum==n) return 1;
	return 0;
}
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(kt(i)) printf("%d ",i);
	}
}
