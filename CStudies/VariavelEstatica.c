//
//  VariavelEstatica.c
//  CStudies
//
//  Created by Hatsumi Hashi on 22/09/17.
//  Copyright © 2017 Hatsumi Hashi. All rights reserved.
//

#include <stdio.h>

static int variavelEstaticaGlobal;

void IniciarSerie(int semente);
int Serie(void);

void IniciarSerie(int semente)
{
    variavelEstaticaGlobal = semente;
}

void VariavelEstaticaGlobal(){
    printf("Uma variável global estática é apenas reconhecida no arquivo no qual a mesma foi declarada.\n");
}

int Serie(void){
    variavelEstaticaGlobal = variavelEstaticaGlobal + 23;
    return variavelEstaticaGlobal;
}
