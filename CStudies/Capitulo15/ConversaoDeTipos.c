//
//  ConversaoDeTipos.c
//  CStudies
//
//  Created by Hatsumi Hashi on 15/10/17.
//  Copyright © 2017 Hatsumi Hashi. All rights reserved.
//

#include "ConversaoDeTipos.h"

void ConversaoDeLongEUnsgnedInt(){
    long numeroLongo = 1;
    unsigned int intSemSinal = 1;
    
    printf("\nTipo de número longo: %lu\n", sizeof(numeroLongo));
    printf("Tipo de inteiro sem sinal: %lu\n", sizeof(intSemSinal));
    
    //printf("Resultado: %lu", );
    
   // SE um operando é **long** E o segundo é **unsigned int** E SE valor de **unsigned int** não pode ser representado por um **long**
   // ENTÃO os dois operandos são convertidos para **unsigned long**
}
