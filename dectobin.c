#include<stdio.h>
int main(){

printf("Ievadiet skailti no 1-7:\n");
int a;
scanf("%d",&a);

int result=(a>>0)%2;
int result1=(a>>1)%2;
int result2=(a>>2)%2;

printf("Rezulats ir %d %d %d\n",result2,result1,result);




}
