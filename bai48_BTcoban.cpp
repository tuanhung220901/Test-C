#include<stdio.h>
#include<math.h>
int snt(int n){
	if(n<2) return 0;
	for(int i =2 ;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int tang(int n){
	int r=n%10;
	n/=10;
	while(n){
		if(r<n%10) return 0;
		n/=10;
	}
	return 1;
}
int main()
{
	int n,dem=0;
	scanf("%d",&n);
	for(int i = 2; i <= n;i++){
		if(tang(i) && snt(i)){
			printf("%d ",i);
			dem++;
		}
		
	}
	printf("\n%d",dem);
}
