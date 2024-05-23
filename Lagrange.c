#include<stdio.h>
#include<math.h>
#include<conio.h>

int main(){
	float x[100],y[100],xp,yp=0,p;
	int i,j,n;
	
//Taking number of item;
printf("Enter the number of data: ");
scanf("%d",&n);

//Taking the data;
printf("Enter the data: ");
	for(i=1;i<=n;i++){
		printf("x(%d)= ",i);
		scanf("%f",&x[i]);
		printf("y(%d)= ",i);
		scanf("%f",&y[i]);
	}
//Taking the interpolation point;
printf("Write the interpolation point: ");
scanf("%f",&xp);

//Applying lagrange formula;
	for(i=1;i<=n;i++){
		p=1;
		for(j=1;j<=n;j++){
			if(i!=j){
				p=p*(xp-x[j])/(x[i]-x[j]);
			}
		}
		yp=yp+p*y[i];
	}
//Print the Result;
printf("for the interpolation point %0.3f the result is %0.3f",xp,yp);

return 0;
	
}
