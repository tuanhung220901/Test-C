#include<stdio.h>
#include<math.h>
int stn(int n)
{
	int stn = 0,r = 0, x = n;
	while(n){
		r=n%10;
		stn=stn*10+r;
		n/=10;
	}
	if(stn==x) return 1;
	return 0;
}
int sum(int n)
{
	int r = 0, sum = 0;
	while(n){
		r=n%10;
		sum+=r;
		n/=10;
	}
	if(sum%10==0) return 1;
	return 0;
}
int main()
{
	int n,dem=0;
	scanf("%d",&n);
	for(int i= pow(10,n-1);i <= pow(10,n);i++){
		if(stn(i)&&sum(i)){
			dem++;
		}
	}
	printf("%d",dem);
}
