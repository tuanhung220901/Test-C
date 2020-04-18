#include<stdio.h>
int main()
{
	int a, b;
	scanf("%d%d",&a,&b);
	if(a&&b)
	printf("%d %d",2*(a+b),a*b);
	else
	printf("0");
}
