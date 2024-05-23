#include<stdio.h>
#include<math.h>
int main(){
	float h,p,s,d,f;
	int i,j,n;
	
//Taking the value of n;
printf("Write the number of elements: \n");
scanf("%d",&n);
float x[n],m[n][n];

//Taking the value of 'x';
printf("Write the value of x: ");
	for(i=0;i<n;i++){
	scanf("%f",&x[i]);	
	}
//Taking the value of 'y';
printf("\nWrite the value of y: ");
	for(i=0;i<n;i++){
	scanf("%f",&m[i][0]);	
	}
//Display the value of 'x';
printf("x= ");
	for(i=0;i<n;i++){
	printf("%f",x[i]);	
	}
//Display the value of 'y';
printf("\ny= ");
	for(i=0;i<n;i++){
	printf("%f",m[i][0]);	
	}
	
//calculation of interpolation table;
	for(j=1;j<n;j++){
		for(i=(n-1);i>=j;i--){
			m[i][j]=m[i][j-1]-m[i-1][j-1];
		}
	}

//Display of interpolation table;
printf("The interpolation table is: \n");	
	for(i=0;i<n;i++){
		for(j=0;j<=i;j++){
printf("%f",m[i][j]);			
		}
	}

//Taking the value of interpolation point;
printf("\nWrite the value of interpolation point: ");
scanf("%f",&f);
h= x[1]-x[0];
p= 1.0;
s= (f-x[n-1])/h;
d= m[n-1][0];
	for(i=1;i<n;i++){
		p=p*(s+i-1)/i;
		d=d+p*m[n-1][i];
	}

//Display the result;
printf("\nFor the value of x(%f) the value of y is %0.4f",f,d);
	}
	

