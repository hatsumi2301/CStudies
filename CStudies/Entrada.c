//
//  Entrada.c
//  CStudies
//
//  Created by Hatsumi Hashi on 23/09/17.
//  Copyright © 2017 Hatsumi Hashi. All rights reserved.
//

#include "Entrada.h"

int EntradaNumero(){
    //Declaração de variável
    int numero;
    
    printf("Insira um número: ");
    
    //Obtém o número informado
    scanf("%d", &numero);
    printf("Você inseriu o número %d.\n", numero);
    getchar();
    
    //Retorno do método
    return numero;
}

