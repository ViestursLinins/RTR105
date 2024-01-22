#include<stdio.h>
#include<math.h>

double mans_kossinus(double x){
double a,S;
int k=0;

a=pow(-1,k)*pow(x,k)/(1.);
S=a;
printf("%.2f\t%8.2f\t%8.2f\n",x,a,S);

while(k<500){
k++;
a=a*(-1)*x/((2*k)*(2*k-1));
S=S+a;
printf("%.2f\t%8.2E\t%8.2f\n",x,a,S);
}
return S;
}
double main(){
double x=2.05,y,yy;
y=cos(sqrt(x));
printf("standarta funkcija cos - y=cos(%.4f)=%.4f\n",x,y);
yy= mans_kossinus(x);
printf("lietotaaja funkcija - y=mans_kosinus(%.4f)=%.4f\n",x,yy);

}


