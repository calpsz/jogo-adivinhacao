#include <stdio.h>

int main(){
    printf("*************************************\n");
    printf("* Bem-vindo ao jogo da adivinhacao! *\n");
    printf("*************************************\n");

    int numerosecreto = 42;
    int chute;
    int tentativas = 1;


    while(1){
        printf("tentativa %d\n", tentativas);

        printf("Qual o seu chute? ");
        scanf("%d", &chute);

        if(chute < 0){
            printf("Voce nao pode digitar numeros negativos!\n");

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

    tentativas++;
    
    }
    printf("Fim de jogo!");
    
}