#include<stdio.h>

int main(){ 
int choice;
//int
int fact_int;
int i=1;
int f=1;
int j=1;
int save;
int saveL;
int variable;
//long long 
long long fact_long;
long long k=1;
long long u=1;
long long t=1;
long long save1;
long long variable1;
printf("Veiciet izveli 1-int 2-long int 3-char:\n");
scanf("%d",&choice);




                                

switch(choice) {
	case 1:

	
	printf("Enter factorial");
	scanf("%d", &fact_int);
	
	for(int i=1;i<=fact_int;i++){
	f=f*i;
	
	}

	save=f;
	saveL=fact_int+f;
	//printf("fakt ir %d\n",save);
	for(j=fact_int;j>=1;j--){
	save=save/j;
	
	}
	//printf("%d",save);
	
	if(save==1){printf("%d %d",save,f);}
	else if(save!=1){printf("ievadiet pareizu veribu kurai nav overflow");}
	else if(saveL>fact_int){printf("skaitlis negativs");}
	else{printf("vertibas nav ievaditas korekti");}
	break;
	
	case 2:
	
	printf("Enter factorial");
	scanf("%lld", &fact_long);
	for(int k=1;k<=fact_long;k++){
	u=u*k;              
	}

	save1=u;
	//printf("fakt ir %d\n",save);
	for(t=fact_long;t>=1;t--){
	save1=save1/t;
	//printf("%d\n",save);
	}
	//printf("%d",save);
	if(save1==1){printf("%lld",u);}
	else if(save1!=1){printf("ievadiet pareizu veribu kurai nav overflow");}
	else{printf("vertibas nav ievaditas korekti");}
	break;
  	//case 3:
  	}
}
