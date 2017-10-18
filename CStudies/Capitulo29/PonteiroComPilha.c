//
//  PonteiroComPilha.c
//  CStudies
//
//  Created by Hatsumi Hashi on 18/10/17.
//  Copyright © 2017 Hatsumi Hashi. All rights reserved.
//

#include "PonteiroComPilha.h"

void Push(int numero){
    ponteiro++;
    
    //Se o endereço do próximo elemento excede o tamanho máximo da pilha
    //Finaliza o programa
    if(ponteiro == topoDaPilha+TAMANHO){
        printf("Estouro do tamanho máximo da pilha.\n");
        exit(1);
    }
    
    *ponteiro = numero;
}

int Pop(){
    //Se o endereço do elemento anterior é igual ao endereço do topo da pilha
    //Finaliza o programa
    if(ponteiro == topoDaPilha){
        printf("Estouro do tamanho mínimo da pilha.\n");
        exit(1);
    }
    
    //Remove o elemento da pilha
    ponteiro--;
    
    //Retorna o valor do elemento removido
    return *(ponteiro+1);
}

void Pilha(){
    int valor;
    
    //Topo da pilha aponta para o primeiro endereço de memória da pilha
    topoDaPilha = pilha;
    
    //Ponteiro aponta para o primeiro endereço de memória da pilha
    ponteiro = pilha;
    
    do{
        printf("Digite -1 para terminar o programa.\n");
        printf("Digite um valor para colocar na pilha\n");
        printf("Digite 0 para tirar o último valor da pilha.\n");
        scanf("%d", &valor);
        
        if(valor != 0) Push(valor);
        else printf("O valor do topo é %d.\n\n", Pop());
    }while (valor != -1);
}
