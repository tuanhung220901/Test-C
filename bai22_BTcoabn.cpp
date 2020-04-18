#include<stdio.h>
int tich(int n)
{
	int tich = 1;
	while(n){
		tich = tich * (n%10);
		n/=10;
	}
	return tich;
}
int main()
{
	int n;
	scanf("%d",&n);
	if(n < 1){
		printf("0");
		return 0;	
	}
	printf("%d",tich(n));
	return 0;
}
