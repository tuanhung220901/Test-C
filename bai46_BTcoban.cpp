#include<stdio.h>
#include<math.h>
int snt(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int sum(int n){
	int sum =0;
	while(n){
		sum=sum+n%10;
		n/=10;
	}
	if(sum%5==0) return 1;
	return 0;
}
int main()
{
	int n,dem=0;
	scanf("%d",&n);
	for(int i=2;i<=n;i++){
		if(sum(i)&&snt(i)){
			printf("%d ",i);
			dem++;
		}
	}
	printf("\n%d",dem);
}
