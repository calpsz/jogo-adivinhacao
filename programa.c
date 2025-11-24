#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    printf("*************************************\n");
    printf("* Bem-vindo ao jogo da adivinhacao! *\n");
    printf("*************************************\n");

    int segundos = time(0);
    srand(segundos);

    int numerogrande = rand();

    //numero random de 1 a 99
    int numerosecreto = numerogrande % 100;

    int chute;
    int tentativas = 1;

    double pontos = 1000;


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
            printf("Vc acertou!!! PARABENSSS!!! UHUUULL\n\n");
            break;
        }
        else if (menor){
            printf("Seu chute eh MENOR que o numero secreto\n\n");
        }
        else{
            printf("Seu chute eh MAIOR que o numero secreto\n\n");
        }

        tentativas++;

        //regra do jogo, nao eh uma formula pronta, depende do design do jogo que quer
        double pontosperdidos = abs(chute - numerosecreto) / (double) 2;
        pontos = pontos - pontosperdidos;
    
    }
    printf("Fim de jogo!\n");
    printf("Numero de tentativas: %d\n", tentativas);
    printf("Total de pontos: %.2f", pontos);
    
}