#include<stdio.h>
#include<math.h>
int snt(int n)
{
	if(n<2) return 0;
	for(int i = 2 ; i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main()
{
	int a ,b;
	scanf("%d%d",&a,&b);
	if(a<b){
		for(int i = a; i <= b; i++){
			if(snt(i)) printf("%d ",i);
		}
	}
	else {
		for(int i = b; i <= a; i++){
			if(snt(i)) printf("%d ",i);
		}
	}
	return 0;
}
