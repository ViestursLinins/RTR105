#include<stdio.h>

int main(){ 
//int
int fact_int;
int i=1;
int f=1;
int j=1;
int save;
int saveL;
int variable;
int izvele;
//long long
long long fact_long;
long long k=1;
long long u=1;
long long t=1;
long long save1;
long long variable1;
printf("izveleties datu tipu 1-INT 2-LONG LONG 3-CHAR\n");
scanf("%d",&izvele);


switch(izvele){

	case 1:
	printf("Enter factorial");
	scanf("%d", &fact_int);
	while(i<=fact_int){
	f=f*i;
	i++;
	}
	save=f;
	j=fact_int;
	while(j>=1){
	save=save/j;
	j--;
	}
	
	if(save==1){printf("%d %d",save,f);}
	else if(save!=1){printf("ievadiet pareizu veribu kurai nav overflow");}
	else{printf("vertibas nav ievaditas korekti");}
	break;
	
	case 2:
	printf("Enter factorial");
	scanf("%lld", &fact_long);
	while(k<=fact_long){
	u=u*k;
	k++;}
	save1=u;
	t=fact_long;
	while(t>=1){
	save1=save1/t;
	t--;}
	if(save1==1){printf("%lld %lld",save1,u);}
	else if(save1!=1){printf("ievadiet pareizu veribu kurai nav overflow");}
	else{printf("vertibas nav ievaditas korekti");}
	break;
	
	case 3:
	printf("Ar char vertibu nav iespejams faktorialis");
	break;
	
	

}


}
