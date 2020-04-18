#include<stdio.h>
#include<math.h>
int kt(int n)
{ 
	for(int i=2;i<=sqrt(n);i++){
		int hung = 0;
		while(n%i==0){
			n/=i;
			hung = 1;
		}
		if(hung==1) printf("%d ",i);
	}
	if(n>1) printf("%d",n);
}
int main()
{
	int n;
	scanf("%d",&n);	
	kt(n);
	return 0;
}
