//pt bac2: ax^2+bx+c=d.
#include<stdio.h>
#include<math.h>
int main ()
{
	int a,b,c,d;
	float e,f,g,h,j;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	e=(c-d);
	if(a==0)
	{
		if(b!=0)
		{
			printf("%d",(-e/b));
		}
		else 
		{
	  		if(e==0)
				printf("Infinity");
			else
				printf("NO");	
		}
	}
	else
	{
		f=1.0*((b*b)-(4*a*e));
		if(f<0)
		{
			printf("NO");
		}
		if(f==0)
		{
			g=1.0*((-b)/(2*a));
			printf("%f ",g);
		}
		if(f>0)
		{
			h=1.0*((-b)-sqrt(f))/(2*a);
			j=1.0*((-b)+sqrt(f))/(2*a);
			if(a>0) printf("%f%f",h,j);
			if(a<0) printf("%f%f",j,h);
		}
	}
}
