#include<stdio.h>
#include<locale.h>

int num,i,t,mult=1;

main(){
    setlocale(LC_CTYPE, "Spanish");
    for(i=0;i<5;i++){
        printf("Escriba un número:\n");
        scanf("%d",&num);
        t=t+1;
        if(t>1 && t<5){
            mult=mult*num;
        }
    }
    printf("El resultado de la suma de los últimos cuatro números es %d",mult);
}

