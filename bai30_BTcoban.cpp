#include<stdio.h>
int main()
{
	int n, r = 0;
	scanf("%d",&n);
	r = n % 10;
	while(n>=10){
		n/=10;
	}
	printf("%d %d", n, r);
	return 0;
}
