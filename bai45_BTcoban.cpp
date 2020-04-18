#include<stdio.h>
int scp(int n){
	int i = 0;
	while(i*i<=n){
		if(i*i==n) return 1;
		i++;
	}
	return 0;
}
int fibonacci(int n){
	if(scp(5*n*n+4)||scp(5*n*n+4)) return 1;
	return 0;
}
int main()
{
	int n;
	scanf("%d",&n);
	if(fibonacci(n)) printf("1");
	else printf("0");
	return 0;
}
