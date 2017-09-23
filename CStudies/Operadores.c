//
//  Operadores.c
//  CStudies
//
//  Created by Hatsumi Hashi on 22/09/17.
//  Copyright © 2017 Hatsumi Hashi. All rights reserved.
//

#include <stdio.h>

int xor(int a, int b);

void Modulo(){
    printf("Não pode ser usado nos tipos em ponto flutuante.\n");
    
    int x, y;
    
    x = 5;
    y = 2;
    
    printf("%d/%d = %d\n", x, y, x/y);
    printf("%d%%%d = %d\n", x, y, x%y);
    
    x = 1;
    y = 2;
    
    printf("%d/%d = %d \n%d%%%d = %d errado\n", x, y, x/y, x, y, x%y);
}

void IncrementoDecremento(){
    int x;
    int y;
    
    x = 10;
    printf("x = %d\n", x);
    y = ++x;
    printf("y = ++x = %d\n", y);
    printf("x = %d\n\n", x);
    
    x = 10;
    printf("x = %d\n", x);
    y = x++;
    printf("y = x++ = %d\n", y);
    printf("x = %d\n", x);
}

void PrintXor(){
    printf("%d, %d, %d\n", 1, 0, xor(1, 0));
    printf("%d, %d, %d\n", 1, 1, xor(1, 1));
    printf("%d, %d, %d\n", 0, 1, xor(0, 1));
    printf("%d, %d, %d\n", 0, 0, xor(0, 0));
}

int xor(int a, int b){
    return (a || b) && !(a && b);
}

void OperadoresBitBit(){
    printf("Operador    Ação\n");
    printf("&           AND \n");
    printf("|           OR\n");
    printf("ˆ           OR exclusivo (XOR)\n");
    printf("~           Complemento de um\n");
    printf(">>          Deslocamento à esquerda\n");
    printf("<<          Deslocamento à direitw\n");
}
