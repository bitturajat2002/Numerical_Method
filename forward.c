#include<stdio.h>
#include<math.h>
int main(){
float h,p,s,d,f;
int i,j,n;

// taking the number of element;
printf("Write the value of n= \n");
scanf("%d",&n);
float x[n],m[n][n];

//taking the value of 'x';
printf("write te element of x= ");
	for(i=0;i<n;i++){
		scanf("%f",&x[i]);	
	}
//taking the value of 'y';
printf("\nwrite te element of y= ");
	for(i=0;i<n;i++){
		scanf("%f",&m[i][0]);	
	}
//print the value of 'x';
printf("x= ");
	for(i=0;i<n;i++){
		printf("%f",&x[i]);	
	}
//print the value of 'y';
printf("\ny= ");
	for(i=0;i<n;i++){
		printf("%f",&m[i][0]);	
	}

printf("\n");


//calculation of Interpolation table;
	for(j=1;j<n;j++){
		for(i=0;i<(n-j);i++){
			m[i][j]=m[i+1][j-1]-m[i][j-1];
		}
	}


//Displaying of Interpolation table;
printf("The interpolation table is: ");
	for(i=0;i<n;i++){
		for(j=0;j<(n-i);j++){
			printf("%f",m[i][j]);
		}
	}
	
//Taking the interpolation point;
printf("\nWrite the interpolation point of x value= \n");
scanf("%f",&f);
	h= x[1]-x[0];
	p= 1.0; 
	s= (f-x[0])/h;
	d= m[0][0];
		for(i=1;i<n;i++){
			p=p*(s-i+1)/i;
			d=d+p*m[0][i];
		}
		
//print the resut;
		printf("\nFor the interpolation value x(%f) the value of y is %0.4f= ",f,d);
		
	}

