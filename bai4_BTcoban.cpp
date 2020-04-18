#include<stdio.h>
#include<math.h>
int tang(int n)
{
	int r = n % 10;
	n/=10;
	while(n){
		if(r <= n % 10) return 0;
		r = n % 10;
		n/=10;
	}
	return 1;
}
int giam(int n)
{
	int r = n % 10;
	n/=10;
	while(n){
		if(r >= n % 10) return 0;
		r = n % 10;
		n/=10;
	}
	return 1;
}
int snt(int n)
{
	if(n<2) return 0;
	for(int i =2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return 1;
}
int main()
{
	int n, dem = 0;
	scanf("%d",&n);
	for(int i = pow(10,n-1); i < pow(10,n) ; i++){
		
			if(snt(i)&&(tang(i)||giam(i))){
				//printf("%d ",i);
				dem++;
			}
	}
		printf("%d",dem);
}
