#include<stdio.h>
#include<math.h>

float modified_cos(float x, float A){
return cos(sqrt(x))-A;

}

void main(){
float a,x,delta_x,b,y,A;
printf("Nosakat a vertibu\n");
scanf("%f",&a);
printf("Nosakat b vertibu\n");
scanf("%f",&b);
printf("Ievadiet A vertibu f(x) kuram tuvojas \n");
scanf("%f",&A);
	
printf("Intervals %f %f tuvojas %f",a,b,A);
x=a;
printf("Ievadiet attalumu\n");
scanf("%f",delta_x);
printf("\tx\ty\n");
while(x<b){
printf("%10.1f%10.1f\n",x,modified_cos(sqrt(x,A)));
x+=delta_x;
}
}