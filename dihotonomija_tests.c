#include<stdio.h>
#include<math.h>

int main(){
float a,b,c,f,x,g;
float Epsilon;
printf("Ievadiet vertibu iteracijam,precizitatei\n");
scanf("%f",&Epsilon);
f=cos(sqrt(a));
x=cos(sqrt(b));
g=cos(sqrt(c));
printf("Ievadiet a \n");
scanf("%f",&a);
printf("Ievadiet b \n");
scanf("%f",&b);
printf("[%f,%f] intervals\n",a,b);
printf("viduspunkts %f\n",a-b);
c=(a+b)/2;
printf("c VERTIBA %f\n",c);
if(c==0){
printf("c ir sakne %f\n",c);
return 0;
}
if(f*x>=0){
printf("Nepareizas a un b vertibas,out of bounds,nav saknu[%f,%f]]\n",a,b);
}
while((b-a)>=Epsilon){
c=(a+b)/2;
if (g*f<0){
printf("b=c %f=%f\n",b,c);
b=c;
}
else{printf("%f=%f a=c\n",a,c);a=c;}


}
	
}