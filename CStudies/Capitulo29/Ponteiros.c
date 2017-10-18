//
//  Ponteiros.c
//  CStudies
//
//  Created by Hatsumi Hashi on 17/10/17.
//  Copyright © 2017 Hatsumi Hashi. All rights reserved.
//

#include "Ponteiros.h"

void VariavelPonteiroTipoDiferente(){
    //Código comentado para evitar warnings
    
    //O compilador do programa xCode, que é o que eu estou utilizando,
    //Exibe um warning sobre a incompatibilidade do endereço da variável que está sendo atribuída
    //Ao ponteiro
    
    //float x = 1.2;
    //float y = 0;
    //int *p;

    //Ponteiro do tipo int aponta para um elemento do tipo float
    //p = &x;
    
    //Variável do tipo float recebe o valor do ponteiro
    //y = *p;
}

void AtribuicaoDePonteiros()
{
    int x = 1;
    int *p1;
    int *p2;
    
    //Ponteiro p1 recebe o endereço da memória de x
    p1 = &x;
    //Ponteiro p2 recebe o endereço que está em p1
    //Que é o endereço de x
    p2 = p1;
    
    printf("Endereço de memória de x que está no ponteiro p1: %p\n", p1);
    printf("Valor em p1: %d\n", *p1);
    printf("Endereço de memória de x que está no ponteiro p2: %p\n", p2);
    printf("Valor em p2: %d\n\n", *p2);
}

void AritmeticaDePonteirosInt(){
    int x = 2;
    int *p1;
    
    p1 = &x;
    
    printf("Endereço de memória inicial de p1: %p\n", p1);
    printf("Valor em p1: %d\n\n", *p1);

    //Aponta para o próximo endereço de memória que possui um inteiro
    p1++;
    
    printf("p1++;\n");
    printf("Endereço de memória de p1: %p\n", p1);
    printf("Valor em p1: %d\n\n", *p1);
    
    //Aponta para o próximo décimo primeiro endereço de memória que possui um inteiro
    p1 = p1 + 10;
    
    printf("p1 = p1 + 10;\n");
    printf("Endereço de memória de p1: %p\n", p1);
    printf("Valor em p1: %d\n\n", *p1);
    
    //Aponta para o décimo primeiro anterior endereço de memória que possui um inteiro
    p1 = p1 - 10;
    
    printf("p1 = p1 - 10;\n");
    printf("Endereço de memória de p1: %p\n", p1);
    printf("Valor em p1: %d\n\n", *p1);
    
    //Aponta para endereço de memória anterior que possui um inteiro
    p1--;
    
    printf("p1--;\n");
    printf("Endereço de memória de p1: %p\n", p1);
    printf("Valor em p1: %d\n", *p1);
}

void AritmeticaDePonteirosDouble(){
    double x = 2.2;
    double *p1;
    
    p1 = &x;
    
    printf("Endereço de memória inicial de p1: %p\n", p1);
    printf("Valor em p1: %f\n\n", *p1);
    
    //Aponta para o próximo endereço de memória que possui um inteiro
    p1++;
    
    printf("p1++;\n");
    printf("Endereço de memória de p1: %p\n", p1);
    printf("Valor em p1: %f\n\n", *p1);
    
    //Aponta para o próximo décimo primeiro endereço de memória que possui um inteiro
    p1 = p1 + 10;
    
    printf("p1 = p1 + 10;\n");
    printf("Endereço de memória de p1: %p\n", p1);
    printf("Valor em p1: %f\n\n", *p1);
    
    //Aponta para o décimo primeiro anterior endereço de memória que possui um inteiro
    p1 = p1 - 10;
    
    printf("p1 = p1 - 10;\n");
    printf("Endereço de memória de p1: %p\n", p1);
    printf("Valor em p1: %f\n\n", *p1);
    
    //Aponta para endereço de memória anterior que possui um inteiro
    p1--;
    
    printf("p1--;\n");
    printf("Endereço de memória de p1: %p\n", p1);
    printf("Valor em p1: %f\n", *p1);
}
