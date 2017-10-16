//
//  VariaveisGlobais.c
//  CStudies
//
//  Created by Hatsumi Hashi on 24/09/17.
//  Copyright © 2017 Hatsumi Hashi. All rights reserved.
//

#include "VariaveisGlobais.h"

void FuncaoQueUtilizaAsVariaveisGlobais(){
    //É possível utilizar a variável x sem declarar ela no escopo do método
    //Pois ela foi declarada na classe como variável global
    x = 100;
    
    printf("\"x\" e \"y\" são variáveis globais que foram declaradas na classe \"VariaveisGlobais\"\n");
}
