/*LV
Uzrakstiet kodus (moduļus) ar četrām dažādām lietotāju funkcijām - bez argumentiem un bez return, ar argumentiem un bez return, bez argumentiem un ar return, ar argumentiem un ar return. Risinājuma kodus (+ kods ar main, kurā šis sagatavotas funkcijas tiek izmantotas) augšupielādējiet GitHub vietnē Jūsu RTR105 repozitorijā, šeit iekopējiet risinājuma koda adresi.
EN
Write codes (modules), which will use four different user defined functions – without arguments and without return, with arguments and without return, without arguments and with return, with arguments and with return. Upload solution codes (+ code with main, in which all prepared functions are used) into Your RTR105 repository, insert here address of solution code.
*/
#include<stdio.h>

//sum
void sum();
//pow
void power(float);
//divide
double divide();
//atlikums
int atlikums(int,int);
//main
int main(){
int izvele;
printf("Choose your statement type and function:\n");
printf("1-No arguments and no return (SUM)\n");
printf("2-With arguments without return(POWER)\n");
printf("3-Without arguments and with return(DIVIDE 4/2)\n");
printf("4-With arguments and with return(FACTORIAL)\n");
scanf("%d",&izvele);

switch(izvele)
{
case 1:
 sum();
 return 0;
 break;
case 2:
 float a;
 printf("Enter a value to POW it:\n");
 scanf("%f",&a);
 //Calling function
 power(a);
 return 0;
 break;
case 3:
double result=divide();
printf("Value is:%lf\n",result);
return 0;
break;
case 4:
int skaititajs,sauc;
printf("Enter number  values which will be used with operator for a modulo");
scanf("%d %d",&skaititajs,&sauc);
skaititajs=atlikums(skaititajs,sauc);
printf("Total is	%d\n",skaititajs);
return 0;

 
break; 
}
sum();
return 0;




}

void sum()
{
float num1,num2,num3;
printf("\nEnter	2 numbers for addition:\n");
scanf("%f %f",&num1,&num2);
num3=num2+num1;
printf("Summa:%f\n",num3);

}
void power(float a)
{ 
float c=a*a;
printf("\nPOW is %f",c);

}

double divide(){

printf("Result enter 2 values:");
double numero1;
double numero2;
scanf("%lf\n",&numero1);
scanf("%lf",&numero2);
double divide=numero1/numero2;
return divide;

}
int atlikums(int atlk,int saucejs){
int modulo;
modulo=atlk % saucejs;
return modulo;
}





