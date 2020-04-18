#include <stdio.h>
#include <math.h>
int fibonacci(int n) {
    if (n == 0)
        return 1;
   int f0=0,f1=1,tg;
   while(f1<n){
    tg=f0;
   	f0=f1;
   	f1=f1+tg;
   }
   if(f1==n) return 1;
   return 0;
}
int nto(int n)
{
	if(n<2) return 0;
	for(int i =2 ;i <= sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int sum(int n)
{
	int r=0 , sum =0;
	while(n>0){
		  r = n%10;
		sum =sum+r;
		n/=10;
	}
return sum;
}
int main()
{
	int a,b,f1=0;
	scanf("%d%d",&a,&b);
	if(a<b){
		for(int i=a;i<=b;i++){
			if(nto(i)&&fibonacci(sum(i))){
				printf("%d ",i);
			}
		}
	}
	else {
		for(int i = b;i <= a; i++){
			if(nto(i)&&fibonacci(sum(i))){
				printf("%d ",i);
			}
		}
	}

	return 0;

}
