//
//  MatrizesUnitarias.c
//  CStudies
//
//  Created by Hatsumi Hashi on 08/10/17.
//  Copyright © 2017 Hatsumi Hashi. All rights reserved.
//

#include "MatrizesUnitarias.h"

void Matriz(){
    int i;
    //Declaração de uma matriz com 10 posições, posição de 0 a 9
    char matriz[10];
    
    for(i = 0; i < 10; i++){
        matriz[i] = i; //Coloca na posição de 0 a 9, o valor de i
    }
}

void UltrapassaLimiteDaMatriz(){
    int matriz[10];
    int i;
    
    //A matriz tem apenas 10 posições, porém o laço for, possui 100 execuções
    //Como você pode ver, o código é compilado sem erro
    //O controle do limite do tamanho de uma matriz, é responsabilidade do programador
    for(i = 0; i < 100; i++){
        matriz[i] = i;
    }
}

void PonteiroNaMatriz(){
    int *p;
    int exemplo[10];
    
    p = exemplo; //Ponteiro que aponta para o primeiro elemento da matriz
}

void MatrizFuncao(){
    int i[10];
    int *p;
    
    p = i;
    
    MatrizRecebePonteiroModo1(p);
    MatrizRecebePonteiroModo2(p);
    MatrizRecebePonteiroModo3(p);
}

void MatrizRecebePonteiroModo1(int *p){
    //Método recebe ponteiro
}

void MatrizRecebePonteiroModo2(int i[10]){
    //Método recebe matriz dimensionada
}

void MatrizRecebePonteiroModo3(int i[]){
    //Método recebe matriz não-dimensionada
}
