#include<stdio.h>
int kt(int n)
{ 
	int r = 0;
	while(n){
		r = n % 10;
		if(r!=6&&r!=8&&r!=0) return 0;
		n/=10;
	}
	return 1;
}
int main()
{
	int n;
	scanf("%d",&n);
	if(kt(n)) printf("1");
	else printf("0");
	return 0;
}
