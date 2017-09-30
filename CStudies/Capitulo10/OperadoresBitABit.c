//
//  OperadoresBitABit.c
//  CStudies
//
//  Created by Hatsumi Hashi on 28/09/17.
//  Copyright © 2017 Hatsumi Hashi. All rights reserved.
//

#include "OperadoresBitABit.h"

void And(){
    printf("0 & 0: %d\n", (0 & 0));
    printf("0 & 1: %d\n", (0 & 1));
    printf("1 & 0: %d\n", (1 & 0));
    printf("1 & 1: %d\n", (1 & 1));
}

void Or(){
    printf("0 | 0: %d\n", (0 | 0));
    printf("0 | 1: %d\n", (0 | 1));
    printf("1 | 0: %d\n", (1 | 0));
    printf("1 | 1: %d\n", (1 | 1));
}

void Xor(){
    printf("0 ^ 0: %d\n", (0 ^ 0));
    printf("0 ^ 1: %d\n", (0 ^ 1));
    printf("1 ^ 0: %d\n", (1 ^ 0));
    printf("1 ^ 1: %d\n", (1 ^ 1));
}

void ComplementoDeUm(){
    printf("~0: %d\n", (~0));
    printf("~1: %d\n", (~1));
}

void Deslocamentos(){
    int x = 7;
    
    printf("x = 7\n");
    
    x = x << 1;
    printf("x = x << 1 = %d\n", x);
    x = x << 3;
    printf("x = x << 3 = %d\n", x);
    x = x << 2;
    printf("x = x << 2 = %d\n", x);
    x = x >> 1;
    printf("x = x >> 1 = %d\n", x);
    x = x >> 1;
    printf("x = x >> 1 = %d\n", x);
}

char Codificar(char ch){
    return(~ch);
}
