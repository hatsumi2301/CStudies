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
    //Esse método é utilizado para atribuir um valor à variável estática variavelEstaticaGlobal
    variavelEstaticaGlobal = semente;
}

int Serie(){
    //Esse método adiciona o valor 23 à variável estática
    //Não é necessário declarar a variável estática nesse método, pois ela já foi declarada na classe
    variavelEstaticaGlobal = variavelEstaticaGlobal + 23;
    return variavelEstaticaGlobal;
}

int VariavelEstatica(){
    //Essa linha é executada apenas uma vez, na primeira chamada desse método
    static int numero = 10;
    
    //Essa linha é executada todas as vezes em que o método é chamado
    numero = numero + 1;
    
    return numero;
}
