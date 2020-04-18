#include<stdio.h>
#include<math.h>
int snt(int );
int kt(int );
int kt(int n){
	int snd = 0, x = n;
	while(n){
		snd = snd*10 + n % 10;
		n/=10;
	}
	if(snt(snd)&&snd!=x&&snt(x))return 1;
	return 0;
}
int snt(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0; 
	}
	return 1;
}
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	if(a < b){
		for(int i = a;i <= b; i++){
			if(kt(i)) printf("%d ",i);
		}
	}
	else {
		for(int i = b;i <= a; i++){
			if(kt(i)) printf("%d ",i);
		}
	}
}
