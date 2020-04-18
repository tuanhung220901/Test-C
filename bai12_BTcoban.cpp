#include<stdio.h>
#include<math.h>
int snt(int n)
{
	for(int i = 2; i <= sqrt(n);i++ ){
		while(n%i==0){
			printf("%d ",i);
			n/=i;
		}
	}
	if(n>1) printf("%d",n);
}
int main()
{
	int n;
	scanf("%d",&n);
	snt(n);
}
