#include<stdio.h>

int main(){
char a,b,c;
int izvele;

printf("Ievadiet char skaitlus\n");
scanf("%c",&a);
scanf("%c",&b);
scanf("%c",&c);
int asci1=a;
int asci2=b;
int asci3=c;
printf("ASCII vertiba %c = %d\n", a, asci1);
printf("ASCII vertiba %c = %d\n", b, asci2);
printf("ASCII vertiba %c = %d\n", c, asci3);
printf("Izvelaties secibu 1-AUG 2-DILST==");
scanf("%d",&izvele);

switch(izvele){
 case 1:
	//a
        printf("Vertibas asci konteksta %c=%d %c=%d %c=%d\n",a,asci1,b,asci2,c,asci3);
        
      if(asci1<asci2&&asci1<asci3){printf("%c=%d\n",a,asci1);
      if(asci2<asci3||asci2==asci1){printf("%c=%d\n",b,asci2);
      if(asci3>asci2&&asci3>asci1){printf("%c=%d\n",c,asci3);}}
      /////abc
      if(asci3<asci2||asci1==asci3){printf("%c=%d\n",c,asci3);
      if(asci2>asci1&&asci2>asci3){printf("%c=%d\n",b,asci2);}}
      }
      if(asci1==asci2&&asci1==asci3){printf("%c=%d %c=%d %c=%d",a,asci1,b,asci2,c,asci3);}
      
      if(asci2<asci1&&asci2<asci3){printf("%c=%d\n",b,asci2);
      if(asci1<asci3||asci1==asci2){printf("%c=%d\n",a,asci1);
       if(asci3>asci2&&asci3>asci1){printf("%c=%d\n",c,asci3);}}
     
      //bac
      if(asci3<asci1||asci3==asci2){printf("%c=%d\n",c,asci3);
      if(asci1>asci2&&asci1>asci2){printf("%c=%d\n",a,asci1);}}
      
      }
      
      //if(asci3<asci2&&asci3<asci1){printf("%c=%d\n")}
      //cab //cba
      if(asci3<asci2&&asci3<asci1){printf("%c=%d\n",c,asci3);
      if(asci2<asci3||asci2==asci3){printf("%c=%d\n",b,asci2);}
      if(asci1>asci3&&asci1>asci2){printf("%c=%d\n",a,asci1);}
      ///////
      if(asci1<asci2||asci1==asci3){printf("%c=%d\n",a,asci1);}
      if(asci2>asci3&&asci2>asci3){printf("%c=%d\n",b,asci2);}
      }
      break;
      
      case 2:
      if(asci1==asci2&&asci1==asci3){printf("%c=%d %c=%d %c=%d",a,asci1,b,asci2,c,asci3);}
      if(asci1>asci2&&asci1>asci3){printf("%c=%d\n",a,asci1);
      if(asci2>asci3||asci2==asci1){printf("%c=%d\n",b,asci2);}
      if(asci3<asci2&&asci3<asci1){printf("%c=%d\n",c,asci3);}
      /////
      if(asci3>asci2||asci3==asci1){printf("%c=%d\n",c,asci3);}
      if(asci2<asci1&&asci2<asci3){printf("%c=%d\n",b,asci2);}
      }
      
      //b
      if(asci2>asci1&&asci2>asci3){printf("%c=%d\n",b,asci2);
      if(asci1>asci3||asci1==asci3){printf("%c=%d\n",a,asci1);}
      if(asci3<asci2&&asci3<asci1){printf("%c=%d\n",c,asci3);}
      
      if(asci3>asci1&&asci3==asci2){printf("%c=%d\n",c,asci3);}
      if(asci1<asci2&&asci1<asci2){printf("%c=%d\n",a,asci1);}
      } 
      //c
      if(asci3>asci1&&asci3>asci2){printf("%c=%d\n",c,asci3);
      if(asci2>asci1||asci2==asci3){printf("%c=%d\n",b,asci2);}
      if(asci1<asci3&&asci1<asci2){printf("%c=%d\n",a,asci1);}
      
      if(asci1>asci2||asci1==asci3){printf("%c=%d\n",a,asci1);}
      if(asci2<asci3&&asci2<asci1){printf("%c=%d\n",b,asci2);}
      }
	break;


}}
else{printf("nekas nav izvelets");}
}


