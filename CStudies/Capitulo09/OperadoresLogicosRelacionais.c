//
//  OperadoresLogicosRelacionais.c
//  CStudies
//
//  Created by Hatsumi Hashi on 27/09/17.
//  Copyright © 2017 Hatsumi Hashi. All rights reserved.
//

#include "OperadoresLogicosRelacionais.h"

int xor(int a, int b);

void PrintXor(){
    printf("%d, %d, %d\n", 1, 0, xor(1, 0));
    printf("%d, %d, %d\n", 1, 1, xor(1, 1));
    printf("%d, %d, %d\n", 0, 1, xor(0, 1));
    printf("%d, %d, %d\n", 0, 0, xor(0, 0));
}

void MaiorQue(){
    printf("10 > 1: %d\n", (10 > 1));
    printf("1 > 10: %d\n", (1 > 10));
    printf("10 > 10: %d\n", (10 > 10));
}

void MaiorQueOuIgual(){
    printf("10 >= 1: %d\n", (10 >= 1));
    printf("1 >= 10: %d\n", (1 >= 10));
    printf("10 >= 10: %d\n", (10 >= 10));
}

void MenorQue(){
    printf("10 < 1: %d\n", (10 < 1));
    printf("1 < 10: %d\n", (1 < 10));
    printf("10 < 10: %d\n", (10 < 10));
}

void MenorQueOuIgual(){
    printf("10 <= 1: %d\n", (10 <= 1));
    printf("1 <= 10: %d\n", (1 <= 10));
    printf("10 <= 10: %d\n", (10 <= 10));
}

void Igual(){
    printf("10 == 1: %d\n", (10 == 1));
    printf("10 == 10: %d\n", (10 == 10));
}

void Diferente(){
    printf("10 != 1: %d\n", (10 != 1));
    printf("10 != 10: %d\n", (10 != 10));
}

int xor(int a, int b){
    return (a || b) && !(a && b);
}
