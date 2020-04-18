#include<stdio.h>
#include<math.h>
int nto(int n)
{
		int hung = 1;
		if(n < 2){
			return 0;
		}
		for(int j = 2; j <= sqrt(n); j++){
			if(n%j==0){
				return 0;
			}
		}
		return 1;
}
int xuly(int n)
{
	int r = 0, sum = 0, hung = 1;
	while(n){
		r = n % 10;
		if(!nto(r)){
			hung = 0;
			break;	
		}
		sum+=r;
		n/=10; 
	}
	if(nto(sum)&&hung==1) return 1;
	return 0;
}
int main()
{
	int a, b, dem = 0;
	scanf("%d%d",&a,&b);
	if(a<b){
		for(int i = a;i <= b;i++){
			if(nto(i)&&xuly(i)){
			dem++;
			//printf("%d\n",i);	
			} 
		}
		printf("%d",dem);
	}
	else{
		for(int i = b;i <= a;i++){
			if(nto(i)&&xuly(i)){
			dem++;
			//printf("%d\n",i);	
			} 
		}
		printf("%d",dem);
	}
	
	
}
//hung hmmmmmm
