//
//  OperadoresDeSelecao.c
//  CStudies
//
//  Created by Hatsumi Hashi on 05/10/17.
//  Copyright © 2017 Hatsumi Hashi. All rights reserved.
//

#include "OperadoresDeSelecao.h"
#include <stdlib.h>

int funcao1(int numero);
int funcao2(void);

void AdivinharONumero()
{
    int magico;
    int chute;
    
    //Atribui à variável magico, um valor randômico
    magico = rand();
    
    printf("Adivinhe o número mágico: ");
    scanf("%d", &chute);
    
    if(chute == magico) printf("Você acertou!!");
    else {
        printf("Você errou!\n");
    }
}

void AdivinharONumeroComIfElseIf(){
    int magico;
    int chute;
    
    //Atribui à variável magico, um valor randômico
    magico = rand();
    
    printf("Adivinhe o número mágico: ");
    scanf("%d", &chute);
    
    if(chute == magico) printf("Você acertou!!");
        else if(chute > magico){
            printf("Muito alto.\n");
        }
        else{
            printf("Muito baixo.\n\n");
        }
}

void AdivinharONumeroComOperadorTernario(){
    int magico;
    int chute;
    
    //Atribui à variável magico, um valor randômico
    magico = rand();
    
    printf("Adivinhe o número mágico: ");
    scanf("%d", &chute);
    
    if(chute == magico) printf("Você acertou!!");
        else chute > magico ? printf("Muito alto.\n") : printf("Muito baixo.\n\n");
            }

void CalcularQuadradoDeUmNumeroComOperadorTernario(){
    int quadrado;
    int i;
    
    printf("Digite um número: ");
    scanf("%d", &i);
    
    quadrado = i > 0 ? i * i : - (i * i);
    
    printf("%d ao quadrado é %d", i, quadrado);
}

void OperadorTernarioComFuncoes(){
    int t;
    
    printf("Digite um número: ");
    scanf("%d", &t);
    
    //Imprime a mensagem apropriada
    t ? funcao1(t) + funcao2() : printf("O número digitado foi zero.\n");
}

int funcao1(int numero){
    printf("%d ", numero);
    return 0;
}

int funcao2(){
    printf("foi o número digitado.\n");
    return 0;
}

void AdivinharONumeroComIfAninhado(){
    int magico;
    int chute;
    
    //Atribui à variável magico, um valor randômico
    magico = rand();
    
    printf("Adivinhe o número mágico: ");
    scanf("%d", &chute);
    
    if(chute == magico) printf("Você acertou!!");
    else {
        printf("Você errou!\n");
        
        if(chute > magico) printf("Muito alto.\n");
        else printf("Muito baixo.\n\n");
    }
}
