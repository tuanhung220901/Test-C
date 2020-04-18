#include<stdio.h>
int kt(int n)
{
	int r = 0, x = 0,y = 0;
	while(n){
		r = n%10;
		if(r%2==0) x++;
		else y++;
		n/=10;
	}
	printf("%d %d",y,x);
}
int main()
{
	int n;
	scanf("%d",&n);
	if(n<1){
		printf("0");
	}
	kt(n);
	return 0;
	
}
