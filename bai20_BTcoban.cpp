#include<stdio.h>
int xuly(int n)
{ 
	int stn = 0, r = 0, sum = 0, x = n,dem = 0;
	while(n){
		r = n % 10;
		if(r == 6) dem++;
		stn = stn*10 + r;
		sum+=r;
		n/=10;
	}
	if(stn == x && dem >= 1 && sum % 10 == 8) return 1;
	return 0;
}
int main()
{
	int a, b, dem = 0;
	scanf("%d%d",&a,&b);
	if(a<b){
		for(int i = a;i <= b;i++){
			if(xuly(i)){
				printf("%d ",i);
			}
		}
	}
}
