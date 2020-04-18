#include<stdio.h>
int us(int n)
{
	int sum = 0;
	for(int i = 1; i <= (n/2); i++){
		if(n % i == 0){
			sum = sum + i;
		}
	}
	if(sum == n&& sum > 1) return 1;
	return 0;
}
int main()
{
	int a,b,dem=0;
	scanf("%d%d",&a,&b);
	if(a<b){
		for(int i = a; i <= b; i++){
			if(us(i)){
				printf("%d ",i);
				dem++;
			}
		}
		if(dem==0){
			printf("0");
		}
	}
	else{
		for(int i = b; i <= a; i++){
			if(us(i)){
				printf("%d ",i);
			}
		}
			if(dem==0){
			printf("0");
		}
	}
}
