#include<stdio.h>
#include<locale.h>

int num=0,i,t,suma;

main(){
    setlocale(LC_CTYPE, "Spanish");
    for(i=0;i<8;i++){
        printf("Escriba un n�mero:\n");
        scanf("%d",&num);
        t=t+1;
        if(t>4){
            suma=suma+num;
        }
    }
    printf("El resultado de la suma de los �ltimos cuatro n�meros es %d",suma);
}
