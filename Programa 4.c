#include<stdio.h>
#include<locale.h>

int ano;

main(){
    setlocale(LC_CTYPE, "Spanish");
    printf("Escriba un año:\n");
    scanf("%d",&ano);

    if(ano % 4==2){
        if(ano>=1958){
                if(ano<=2019){
                    printf("En el año %d",ano);
                    printf(" hubieron elecciones en Costa Rica.");
                }
                else{
                    printf("En el año %d",ano);
                    printf(" habrán elecciones en Costa Rica.");
                }
        }
        else{
            printf("En el año %d",ano);
            printf(" no hubieron elecciones en Costa Rica.");
        }
    }
    else{
        if(ano>=1958){
            if(ano<=2019){
                printf("En el año %d",ano);
                printf(" no hubieron elecciones en Costa Rica.");
            }
            else{
                printf("En el año %d",ano);
                printf(" no habrán elecciones en Costa Rica.");
            }
        }
        else{
            printf("En el año %d",ano);
            printf(" no hubieron elecciones en Costa Rica.");
        }
    }
}
