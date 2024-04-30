#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int escolhaComp,escolhaUser,pontosUser = 0,pontosPc = 0,empates = 0;
    
    while(pontosPc < 3 && pontosUser < 3){
        escolhaComp = rand() % 3 + 1;
  
        printf("Escolha a sua jogada\n1.Pedra 2.Papel 3.Tesoura\n");
        scanf("%d",&escolhaUser);

        if (escolhaComp == escolhaUser)
        {   
            printf("Empate!\n\n");
            empates++;
            printf("--------------------\nPlacar:\nComputador = %d\n",pontosPc);
            printf("Empates = %d\nVocê = %d\n--------------------\n",empates,pontosUser);
            continue;
        }else{
            if(escolhaComp == 1 && escolhaUser == 2){
                printf("Você venceu!O computador escolheu Pedra\n\n");
                pontosUser++;
                printf("--------------------\nPlacar:\nComputador = %d\n",pontosPc);
                printf("Empates = %d\nVocê = %d\n--------------------\n",empates,pontosUser);
            }else if (escolhaComp == 2 && escolhaUser == 1){
                printf("Você perdeu!O computador escolheu Papel\n\n");
                pontosPc++;
                printf("--------------------\nPlacar:\nComputador = %d\n",pontosPc);
                printf("Empates = %d\nVocê = %d\n--------------------\n",empates,pontosUser);
            }else if (escolhaComp == 3 && escolhaUser == 1){
                printf("Você venceu!O computador escolheu Tesoura\n\n");
                pontosUser++;
                printf("--------------------\nPlacar:\nComputador = %d\n",pontosPc);
                printf("Empates = %d\nVocê = %d\n--------------------\n",empates,pontosUser);
            }else if (escolhaComp == 1 && escolhaUser == 3){
                printf("Você perdeu!O computador escolheu Pedra\n\n");
                pontosPc++;
                printf("--------------------\nPlacar:\nComputador = %d\n",pontosPc);
                printf("Empates = %d\nVocê = %d\n--------------------\n",empates,pontosUser);
            }else if (escolhaComp == 2 && escolhaUser == 3){
                printf("Você venceu!O computador escolheu Papel\n\n");
                pontosUser++;
                printf("--------------------\nPlacar:\nComputador = %d\n",pontosPc);
                printf("Empates = %d\nVocê = %d\n--------------------\n",empates,pontosUser);
            }else if (escolhaComp == 3 && escolhaUser == 2){
                printf("Você perdeu!O computador escolheu Tesoura\n\n");
                pontosPc++;
                printf("--------------------\nPlacar:\nComputador = %d\n",pontosPc);
                printf("Empates = %d\nVocê = %d\n--------------------\n",empates,pontosUser);
            }
        }
    }
}
