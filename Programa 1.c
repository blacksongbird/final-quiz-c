#include<stdio.h>
#include<locale.h>

int num=0,i,t;

main(){
    setlocale(LC_CTYPE, "Spanish");
    for(i=0;i<=5;i++){
        printf("Escriba un n�mero:\n");
        scanf("%d",&num);
        if(num%2==0){
            printf("El n�mero %d",num);
            printf(" es par.\n");
            t=t+1;
        }
        else{
            printf("El n�mero %d",num);
            printf(" es impar.\n");
        }
    }
    printf("La cantidad de n�meros pares es %d",t);
}
