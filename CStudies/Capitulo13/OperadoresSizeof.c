//
//  OperadoresSizeof.c
//  CStudies
//
//  Created by Hatsumi Hashi on 01/10/17.
//  Copyright © 2017 Hatsumi Hashi. All rights reserved.
//

#include "OperadoresSizeof.h"
#include <stdio.h>

//Struct empregado
struct empregado{
    char nome[80];
    int idade;
    float salario;
} trab;

//Ponteiro p do tipo empregado recebe o endereço de memória de trab
struct empregado *p = &trab;

void OperadorSizeof(){
    float f;
    
    //Imprime o tamanho de uma variável float
    printf("size of float: %lu\n", sizeof f);
    //Imprime o tamanho de uma variável int
    printf("size of int: %lu\n", sizeof (int));
}

void OperadoresPontoSeta(){
    //Atribui o valor 123.23 ao salário de uma variável trab
    trab.salario = 123.23;
    
    printf("Salário do trabalhador é de: %f\n", trab.salario);
    
    //Atribui o valor 123.45 ao salário de um ponteiro p
    p->salario = 123.45;
    
    printf("Salário do trabalhador é de: %f\n", trab.salario);
}
