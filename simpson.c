#include<stdio.h>
#include<math.h>
#include<conio.h>

float f(float x){
	return 1.0/(1+pow(x,2));
}
int main(){
	float a,b,h,simpson,sum_odd=0,sum_even=0;
	int i,n;
	
// Taking the value of a,b,n;
printf("\nEnter the upper limit b: ");
scanf("%f",&b);
	
printf("\nEnter the lower limit a: ");
scanf("%f",&a);	
	
printf("\nEnter the interval n: ");
scanf("%d",&n);	
	
h= (b-a)/n;
	for(i=1;i<n;i++){
		float x= (a+i*h);
		if(i%2==1){
			sum_odd += f(x);
		} else {
			sum_even += f(x);
		}
	}
//Applying the formula;
simpson = (h/3)*(f(a)+4*sum_odd+2*sum_even+f(b));
printf("The result is %f",simpson);

return 0;
	
}
