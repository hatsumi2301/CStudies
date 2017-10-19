//
//  PonteiroDePonteiro.c
//  CStudies
//
//  Created by Hatsumi Hashi on 19/10/17.
//  Copyright © 2017 Hatsumi Hashi. All rights reserved.
//

#include "PonteiroDePonteiro.h"

void PonteiroDePonteiro(){
    int x = 10;
    int *ponteiro;
    int **ponteiroDePonteiro;
    
    ponteiro = &x;
    ponteiroDePonteiro = &ponteiro;
    
    printf("Valor de x: %d\n", x);
    
    //Ponteiro aponta para o endereço de x
    //Valor do endereço de x
    printf("Endereço de x em *ponteiro: %p\n", ponteiro);
    
    //Valor que está no endereço apontado pelo ponteiro
    printf("Valor de x em *ponteiro: %d\n", *ponteiro);
    
    //PonteiroDePonteiro aponta para o endereço de ponteiro
    //Valor do endereço de ponteiro
    printf("Endereço de *ponteiro em **ponteiroDePonteiro: %p\n", ponteiroDePonteiro);
    
    //Valor do endereço apontado pelo ponteiro apontado pelo ponteiroDePonteiro
    printf("Endereço de x em **ponteiroDePonteiro: %p\n", *ponteiroDePonteiro);
    
    //Valor que está no endereço apontado pelo ponteiro apontado pelo ponteiroDePonteiro
    printf("Valor de x em **ponteiroDePonteiro: %d\n", **ponteiroDePonteiro);
}
