#include<stdio.h>
int kt(int n)
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
	int a, b;
	scanf("%d%d",&a,&b);
	if(a<b){
		for(int i = a; i <= b; i++){
			if(kt(i)) printf("%d ",i);
		}
	}
	else{
		for(int i = b; i <= a; i++){
			if(kt(i)) printf("%d ",i);
		}
	}
}
