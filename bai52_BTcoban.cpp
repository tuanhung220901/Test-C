/*
#include<stdio.h>
void xuly(int n)
{
	int r = 0, a=0, b=0, c=0, d=0;
	while(n){
		r = n % 10;
		if(r==2) a++;
		if(r==3) b++;
		if(r==5) c++;
		if(r==7) d++;
		n/=10;
	}
	if(a>0) printf("2 %d\n",a);
	if(b>0) printf("3 %d\n",b);
	if(c>0) printf("5 %d\n",c);
	if(d>0) printf("7 %d\n",d);
}
int main()
{
	int n;
	scanf("%d",&n);
	xuly(n);
	return 0;
}
*/
#include<stdio.h>
int a[10007];
int main()
{
	int n;
	scanf("%d",&n);
	while(n){
		int r=n%10;
		if(r==2||r==7||r==3||r==5)
		a[r]++;
		n/=10;
	}
	for(int i = 2;i<=7;i++){
		if(a[i]!=0) printf("%d %d\n",i,a[i]);
	}
}
