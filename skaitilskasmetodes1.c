#include<stdio.h>
#include<math.h>
void main(){
//f=f(x+(x1-x0)/2)-f(x-(x1-x0)/2)

float x1,x0,epsilon/*delta*/,meta,k,g;
printf("Ievadiet x1\n");
scanf("%f",&x1);
printf("ievadiet x0\n");
scanf("%f",&x0);
printf("Ievadiet x vertibu ar kuru stradasiet\n");
scanf("%f",&epsilon);
printf("nosakiet k un g lielumus,lai neieklutu muzigaja cikla\n");
scanf("%f",&k);
printf("\n");
scanf("%f",&g);
if(k>g){
printf("k ir jabut mazakam par g\n");}
printf("\t x \t  cos(sqrt(x)) \t  cos(sqrt(x)) (x)	\n" );

meta=x1-x0;
while(meta<=epsilon||k<=g){
printf("%10.2E\t%10.2E\t%10.2E\n",meta,cos(sqrt(meta)),(cos(sqrt(epsilon+(meta)))-cos(sqrt(epsilon))));
epsilon+=meta;
k++;
	 } 

}
	   