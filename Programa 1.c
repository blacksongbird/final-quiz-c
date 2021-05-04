#include<stdio.h>
#include<locale.h>

int num=0,i,t;

main(){
    setlocale(LC_CTYPE, "Spanish");
    for(i=0;i<=5;i++){
        printf("Escriba un número:\n");
        scanf("%d",&num);
        if(num%2==0){
            printf("El número %d",num);
            printf(" es par.\n");
            t=t+1;
        }
        else{
            printf("El número %d",num);
            printf(" es impar.\n");
        }
    }
    printf("La cantidad de números pares es %d",t);
}
