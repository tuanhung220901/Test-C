#include<stdio.h>
void xuly(int a,int b)
{
	int c = a, d = b, k=0;
	if(a==0&&b==0) printf("0 0");
	if(a==0||b==0){
		k=a+b;
		printf("%d %d",k,(c*d)/k);
	}
	while(a != b){
		if(a>b){
			a = a - b;
		}
		else {
			b = b - a;
		}
	}
	printf("%d %d", a, (c*d)/a);
}
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	xuly(a,b);
	return 0;
}
