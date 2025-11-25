#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    printf("\n\n");
    printf("  __| |____________________________________________| |__  \n");
    printf(" (__   ____________________________________________   __) \n");
    printf("    | |                                            | |    \n");
    printf("    | |           SEJA MUITO BEM VINDO AO          | |    \n");
    printf("    | |            JOGO DA ADIVINHACAO!!           | |    \n");
    printf("    | |                                            | |    \n");
    printf("    | |                 by: calpsz                 | |    \n");
    printf("    | |                                            | |    \n");
    printf("  __| |____________________________________________| |__  \n");
    printf(" (__   ____________________________________________   __) \n");
    printf("    | |                                            | |    \n");
    printf("\n\n");

    int nivel;
    printf("Qual nivel de dificuldade quer jogar?\n");
    printf("[1] Facil\n[2] Medio\n[3] Dificil\n\n");
    printf("Escolha: ");
    scanf("%d", &nivel);

    int segundos = time(0);
    srand(segundos);

    int numerogrande = rand();

    //numero random de 1 a 99
    int numerosecreto = numerogrande % 100;

    int chute;
    int tentativas = 1;

    int acertou = 0;

    //max pontos determinados pro jogo
    double pontos = 1000;

    

    int numerodetentativas;
    switch (nivel){
    case 1:
        numerodetentativas = 20;
        break;

    case 2:
        numerodetentativas = 15;
        break;
    
    default:
        numerodetentativas = 6;
        break;
    }


    for(int i = 1; i <= numerodetentativas; i++){
        printf("tentativa %d de %d\n", tentativas, numerodetentativas);

        printf("Qual o seu chute? ");
        scanf("%d", &chute);

        if(chute < 0){
            printf("Voce nao pode digitar numeros negativos!\n");

            continue;
        }

        //basicamente um boolean
        acertou = (chute == numerosecreto);
        int menor = (chute < numerosecreto);


        if(acertou){
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

    if(acertou){
        printf("Vc acertou!!! PARABENSSS!!! UHUUULL ദ്ദി •⩊• )\n");
        printf("Numero de tentativas: %d\n", tentativas);
        printf("Total de pontos: %.2f\n", pontos);
    } else {
        printf("Voce perdeu D:\nTente de novo!\n");
    }

    
    
}