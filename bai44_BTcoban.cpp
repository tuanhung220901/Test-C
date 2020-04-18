#include<stdio.h>
int gt(int n)
{
	int tich=1;
	if(n==0) ;
	for(int i =1;i<=n;i++)
		tich=tich*i;
		return tich;
}
int main()
{
	int n,m=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int k=n-i;k>=1;k--) printf(" ");
		for(int j = 0;j <= i; j++){
			m=(gt(j)*gt(i-j));
			printf("%d ",gt(i)/m);
		}
		printf("\n");
	}	
}
