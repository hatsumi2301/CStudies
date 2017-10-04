//
//  OperadoresSizeof.c
//  CStudies
//
//  Created by Hatsumi Hashi on 01/10/17.
//  Copyright © 2017 Hatsumi Hashi. All rights reserved.
//

#include "OperadoresSizeof.h"

struct empregado{
    char nome[80];
    int idade;
    float salario;
} trab;

//struct trabalhador *p = &trab;

void OperadorSizeof(){
    float f;
    
    printf("size of float: %lu\n", sizeof f);
    printf("size of int: %lu\n", sizeof (int));
}

void GravarDisco(int rec[6], FILE *fp){
    int len;
    
    //len = fwrite(rec, sizeof rec, 1, fp);
    //if(len != 1) printf("Erro de escrita");
}

void OperadoresPontoSeta(){
    trab.salario = 123.23;
    
    printf("Salário do trabalhador é de: %f\n", trab.salario);
    
    //p->salario = 123.45;
    
    printf("Salário do trabalhador é de: %f\n", trab.salario);
}
