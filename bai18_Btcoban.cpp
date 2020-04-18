#include<stdio.h>
int kt(int n)
{
	int x = n,sum = 0;
	while(n){
		int tich = 1;
		for(int i=1;i<=n%10;i++){
			tich=tich*i;
		}
		sum+=tich;
		n/=10;
	}
	if(sum==x) return 1;
	return 0;
}
int main()
{
	int a, b;
	scanf("%d%d",&a,&b);
	if(a<b){
		for(int i=a;i<=b;i++){
			if(kt(i)) printf("%d ",i);
		}
	}
	else {
		for(int i=b;i<=a;i++){
			if(kt(i)) printf("%d ",i);
		}
	}
}
