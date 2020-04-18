#include <stdio.h>
#include <math.h>
int snt(int n)
{
	if(n < 2) return 0;
	for(int i = 2 ; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return 1;
}
int us(int n)
{
	int dem = 0;
	for(int i=1;i<=sqrt(n);i++){
		if(n%i==0 && snt(i)) dem++;
		if(i!=n/i && n%(n/i)==0 && snt(i)) dem++; 
	}
	if(dem>=3) return 1;
	return 0;
}
int stn(int n)
{
	int stn = 0, a = n;
	while(n){
		stn=stn*10 + (n%10);
		n/=10;
	}
	if(stn==a) return 1;
	return 0;
}
int main()
{
	int a, b, dem = 0;
	scanf("%d%d", &a, &b);
	if(a<b){
		for(int i = a; i <= b; i++){
			if(stn(i)&&us(i)){
				printf("%d ",i);
			}
		}
	}
	else{
		for(int i = b; i <= a; i++){
			if(stn(i)&&us(i)){
				printf("%d ",i);
			}
		}
	}
}
