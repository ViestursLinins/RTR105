#include<stdio.h>


int main(){
int a,b,c;
int izvele; 
printf("ievadiet 3CIPARU SKAITLI\n");
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);

printf("veiciet izveli  1  aug  2  dilst");
scanf("%d",&izvele);
if(izvele=1){

        if(a>b&&a>c){printf("%d",a);
        if(b>c&&b<=a){printf("%d",b);
        if(c<b<a||c<=b){printf("%d",c);}
}
        else if(c>b&&c<=a){printf("%d",c);
        if(b<c<a||b<=c){printf("%d",b);
}
}
}
}
        else if(b>a&&b>c){                                                              
        printf("%d",b);
        if(a>c&&a<=b){printf("%d",a);
        if(c<a<b||c<=a){printf("%d",b);}
}
        else if(c>a&&c<=b){printf("%d",c);
        if(a<c<b||a<=c){printf("%d",a);

}
}
}

        else if(c>a&&c>b){printf("%d",c);
                if(a>b&&a<=c){printf("%d",a);
                if(b<a<c||b<=a){printf("%d",b);}
                }
        else if(b>a&&b<=c){printf("%d",b);
                if(a<b<c||a<=b){printf("%d",a);}
}
}

else if(izvele=2){
        if(a<b&&a<c){printf("%d",a);
        if(b<c&&b>=a){printf("%d",b);
        if(c>b>a||c>=b){printf("%d",c);}
}
        else if(c>b&&c>=a){printf("%d",c);
        if(b>c>a||b>=c){printf("%d",b);
}

}
}
}
       if(b<a&&b<c){printf("%d",b);
        if(a<c&&a>=b){printf("%d",a);
        if(c>a>b||c>=b){printf("%d",c);}
}
        else if(c<b&&c<=a){printf("%d",c);
        if(a>b<c||a>=b){printf("%d",a);
}
    
}
}

       if(c<b&&c<a){printf("%d",c);
        if(b<a&&b>=a){printf("%d",b);
        if(a<b<c||a<=c){printf("%d",a);}
}
        else if(a<b&&a<=c){printf("%d",a);
        if(b<a<c||b<=c){printf("%d",b);
}

}
}

else{printf("nekas nav izvelets");}
}


