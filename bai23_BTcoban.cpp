#include<stdio.h>
#include<math.h>
void lietke(int n)
{
	for(int i=1;i<=sqrt(n);i++){
		if(n%i==0) printf("%d ",i);
	}
	for(int i=sqrt(n);i>=1;i--){
		if(n%i==0) printf("%d ",n/i);
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	lietke(n);
}
