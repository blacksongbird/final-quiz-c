#include<stdio.h>
#include<locale.h>

int ano;

main(){
    setlocale(LC_CTYPE, "Spanish");
    printf("Escriba un a�o:\n");
    scanf("%d",&ano);

    if(ano % 4==2){
        if(ano>=1958){
                if(ano<=2019){
                    printf("En el a�o %d",ano);
                    printf(" hubieron elecciones en Costa Rica.");
                }
                else{
                    printf("En el a�o %d",ano);
                    printf(" habr�n elecciones en Costa Rica.");
                }
        }
        else{
            printf("En el a�o %d",ano);
            printf(" no hubieron elecciones en Costa Rica.");
        }
    }
    else{
        if(ano>=1958){
            if(ano<=2019){
                printf("En el a�o %d",ano);
                printf(" no hubieron elecciones en Costa Rica.");
            }
            else{
                printf("En el a�o %d",ano);
                printf(" no habr�n elecciones en Costa Rica.");
            }
        }
        else{
            printf("En el a�o %d",ano);
            printf(" no hubieron elecciones en Costa Rica.");
        }
    }
}
