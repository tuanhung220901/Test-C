#include<stdio.h>
int xuly(int n)
{
	int st = n, kt = 0, i = 2;
	while(n > 1){
		if(n % i == 0){
			while(n%i==0){
				n/=i;
			}
			if(st%i==0 && st%(i*i)==0) kt=1;
		}
		else i++;
	}
	if(kt==1) return 1;
	return 0;
}
int main()
{
	int a, b;
	scanf("%d%d",&a,&b);
	if(a<b){
		for(int i = a; i <= b; i++){
			if(xuly(i)) printf("%d ",i);
		}
	}
	else {
		for(int i = b;i <= a; i++){
			if(xuly(i)) printf("%d ",i);
		}
	}
	return 0;
}
