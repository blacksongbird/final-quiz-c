#include<stdio.h>
#include<locale.h>

int num[8],i,t;

main(){
    setlocale(LC_CTYPE, "Spanish");
    for(i=0;i<=7;i++){
        printf("Escriba un número:\n");
        scanf("%d",&num[i]);
    }
    for(i=0;i<=7;i++){
        if(num[i]%2!=0&&num[i]%3!=0&&num[i]%5!=0&&num[i]%7!=0&&num[i]%11!=0){
            t=t+1;
        }
        if(num[i]==2||num[i]==3||num[i]==5||num[i]==7||num[i]==11){
            t=t+1;
        }
    }
    printf("La cantidad de números primos es %d",t);
}
