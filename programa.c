#include <stdio.h>

#define NUMERO_TENTATIVAS 5

int main(){
    printf("*************************************\n");
    printf("* Bem-vindo ao jogo da adivinhacao! *\n");
    printf("*************************************\n");

    int numerosecreto = 42;
    int chute;


    for(int i = 1; i <= NUMERO_TENTATIVAS; i++){
        printf("tentativa %d de %d\n", i, NUMERO_TENTATIVAS);

        printf("Qual o seu chute? ");
        scanf("%d", &chute);

        if(chute < 0){
            printf("Voce nao pode digitar numeros negativos!\n");
            i--;

            continue;
        }

        //basicamente um boolean
        int acertou = (chute == numerosecreto);

        int menor = (chute < numerosecreto);


        if(acertou){
            printf("Vc acertou!!!\n");
            break;
        }
        else if (menor){
            printf("Seu chute eh MENOR que o numero secreto\n\n");
        }
        else{
            printf("Seu chute eh MAIOR que o numero secreto\n\n");
        }

    
    }
    printf("Fim de jogo!");
    
}