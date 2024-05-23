#include<stdio.h>
#include<math.h>
//Decalring the function;
float f(float x){
	return 1.0/(1+ pow(x,2));
}

int main(){
	int i,n;
	float a,b,h,sum1=0,sum2=0,trapezoid;
	
//taking value of upper(b),lower(a),h;
printf("Enter the upper limit b= ");
scanf("%f",&b);

printf("Enter the lower limit a= ");
scanf("%f",&a);
		
printf("Enter the interval n= ");
scanf("%d",&n);	
	
	
h=(b-a)/n;

//Sum of 1st and last value;
sum1= f(a)+f(b);

//Sum of other value;
	for(i=1;i<n;i++){
		sum2 += f(a+i*h);
	}	
sum2=2*sum2;

//Using Trapezoidal formula;
trapezoid = (h/2)*(sum1 + sum2);

//Print the result;

printf("\nThe integral value is %f: ",trapezoid);

return 0;
}	
	

