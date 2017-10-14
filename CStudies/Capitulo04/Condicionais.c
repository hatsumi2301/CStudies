//
//  Condicionais.c
//  CStudies
//
//  Created by Hatsumi Hashi on 24/09/17.
//  Copyright © 2017 Hatsumi Hashi. All rights reserved.
//

#include "Condicionais.h"

int EntradaNumero(void);

void Condicionais(){
    int numero = EntradaNumero();
    
    //Se a condição for verdadeira, será executada o código do escopo abaixo
    if (numero == 1) {
        printf("Executa esse comando se a condição do primeiro if for verdadeira.\n");
        printf("A condição do if vai ser verdadeira se o número for igual a 1.\n");
    }
    //Se a condição acima for falsa, será verificada se a condição abaixo é verdadeira
    else if(numero == 2){
        printf("Executa esse comando se a condição do primeiro if for falsa e a condição do segundo if for verdadeira.\n");
        printf("A condição do if vai ser verdadeira se o número for igual a 2.\n");
    }
    //Se nenhuma das condições acima forem verdadeiras, será executado o código do escopo abaixo
    else {
        printf("Executa esse comando se a condição dos if e else if forem falsas.\n");
    }
}
