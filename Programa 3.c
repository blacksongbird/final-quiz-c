#include<stdio.h>
#include<locale.h>

int num,i,t,mult=1;

main(){
    setlocale(LC_CTYPE, "Spanish");
    for(i=0;i<5;i++){
        printf("Escriba un n�mero:\n");
        scanf("%d",&num);
        t=t+1;
        if(t>1 && t<5){
            mult=mult*num;
        }
    }
    printf("El resultado de la suma de los �ltimos cuatro n�meros es %d",mult);
}

