#include<stdio.h>
int sum(int n)
{
	int sum = 0 ;
	while(n){
		sum = sum + n%10;
		n/=10;
	}
	return sum;
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",sum(n));
}
