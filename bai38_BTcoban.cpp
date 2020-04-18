#include<stdio.h>
int a[100007];
int main()
{
	int n;
	scanf("%d",&n);
	int i = 1;
	while(n){
		a[i]=n%10;
		i++;
		n/=10;
	}
	//printf("%d\n",i);
	if(a[1]!=0) printf("%d",a[1]);
	for(int j = i-2;j >= 2;j--){
		printf("%d",a[j]);
	}
	printf("%d",a[i-1]);
}
