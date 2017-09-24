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

void EntradaTexto(){
    int t;
    
    printf("Digite 1.\n");
    scanf("%d", &t);
    
    if(t == 1){
        char s[80];
        
        printf("Entre com o nome: ");
        scanf("%s", &s[80]);
        printf("Nome digitado: %s.\n", &s[80]);
    }
}
