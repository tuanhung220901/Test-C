#include<stdio.h>
int xuly(int n,int r){

	int tich = 1;
	for(int i = 1;i <= n;i++){
		tich*=r;
	}
	return tich;
}
int tong(int n){
	int x = n,r = 0,dem = 0,sum = 0 ;
	while(x){
		dem++;
		x = x / 10;
	}
	int m = n;
	while(m){
		r = m % 10;
		sum = sum + xuly(dem,r);
		m=m/10;
	}
	if(sum == n) return 1;
	return 0;
}
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	for(int i=a;i<=b;i++)
	{
		if(tong(i))
		printf("%d ",i);
	}
}
