//
//  VariaveisEstaticas.c
//  CStudies
//
//  Created by Hatsumi Hashi on 25/09/17.
//  Copyright © 2017 Hatsumi Hashi. All rights reserved.
//

#include "VariaveisEstaticas.h"

static int variavelEstaticaGlobal;

void IniciarSerie(int semente);
int Serie(void);

void IniciarSerie(int semente){
    variavelEstaticaGlobal = semente;
}

int Serie(){
    variavelEstaticaGlobal = variavelEstaticaGlobal + 23;
    return variavelEstaticaGlobal;
}

int VariavelEstatica(){
    static int numero = 10;
    
    numero = numero + 1;
    
    return numero;
}
