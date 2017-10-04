//
//  OperadoresBitABit.c
//  CStudies
//
//  Created by Hatsumi Hashi on 28/09/17.
//  Copyright © 2017 Hatsumi Hashi. All rights reserved.
//

#include "OperadoresBitABit.h"

void And(){
    printf("0 & 0: %d\n", (0 & 0)); //Falso e falso = falso
    printf("0 & 1: %d\n", (0 & 1)); //Falso e verdadeiro = falso
    printf("1 & 0: %d\n", (1 & 0)); //Verdadeiro e falso = falso
    printf("1 & 1: %d\n", (1 & 1)); //Verdadeiro e verdadeiro = verdadeiro
}

void Or(){
    printf("0 | 0: %d\n", (0 | 0)); //Falso ou falso = falso
    printf("0 | 1: %d\n", (0 | 1)); //Falso ou verdadeiro = verdadeiro
    printf("1 | 0: %d\n", (1 | 0)); //Verdadeiro ou falso = verdadeiro
    printf("1 | 1: %d\n", (1 | 1)); //Verdadeiro ou verdadeiro = verdadeiro
}

void Xor(){
    printf("0 ^ 0: %d\n", (0 ^ 0)); //Falso ou exclusivo falso = falso
    printf("0 ^ 1: %d\n", (0 ^ 1)); //Falso ou exclusivo verdadeiro = verdadeiro
    printf("1 ^ 0: %d\n", (1 ^ 0)); //Verdadeiro ou exclusivo falso = verdadeiro
    printf("1 ^ 1: %d\n", (1 ^ 1)); //Verdadeiro ou exclusivo verdadeiro = falso
}

void ComplementoDeUm(){
    printf("~0: %d\n", (~0)); //Contrário de falso é verdadeiro
    printf("~1: %d\n", (~1)); //Contrário de verdadeiro é falso
}

void Deslocamentos(){
    int x = 7;
    
    printf("x = 7\n");
    
    //Desloca 1 bit para a esquerda
    x = x << 1;
    printf("x = x << 1 = %d\n", x);
    //Desloca 3 bits para a esquerda
    x = x << 3;
    printf("x = x << 3 = %d\n", x);
    //Desloca 2 bits para a esquerda
    x = x << 2;
    printf("x = x << 2 = %d\n", x);
    //Desloca 1 bit para a direita
    x = x >> 1;
    printf("x = x >> 1 = %d\n", x);
    //Desloca 1 bit para a direita
    x = x >> 1;
    printf("x = x >> 1 = %d\n", x);
}

char Codificar(char ch){
    //Retorna a negação do caractere inserido
    return(~ch);
}
