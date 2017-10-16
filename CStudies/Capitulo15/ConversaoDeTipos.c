//
//  ConversaoDeTipos.c
//  CStudies
//
//  Created by Hatsumi Hashi on 15/10/17.
//  Copyright © 2017 Hatsumi Hashi. All rights reserved.
//

#include "ConversaoDeTipos.h"

void ConversaoDeTipos(){
    char ch = 'a';
    int i = 1;
    float f = 2.3;
    double d = 4.5;
    
    //result = (ch / i) + (f * d) - (f + i);
    
    printf("\nchar: %lu\n", sizeof(ch));
    printf("int: %lu\n", sizeof(i));
    //Char com int, o resultado é um int
    printf("char / int: %lu\n", sizeof(ch / i));
    
    printf("\nfloat: %lu\n", sizeof(f));
    printf("double: %lu\n", sizeof(d));
    //Float com double, o resultado é um double
    printf("float * double: %lu\n", sizeof(f * d));
    
    printf("\nfloat: %lu\n", sizeof(f));
    printf("int: %lu\n", sizeof(i));
    //Float com int, o resultado é um int
    printf("float - int: %lu\n", sizeof(f - i));
    
    //Int com double, o resultado é double
    printf("\n(char / int) + (float * double): %lu\n", sizeof((ch / i) + (f * d)));
    
    //Double com float, o resultado é double
    printf("\n(char / int) + (float * double) - (float + int): %lu\n", sizeof((ch / i) + (f * d) - (f + i)));
}

void ConversaoDeLongEUnsignedInt(){
    long numeroLongo = 1;
    unsigned int intSemSinal = 1;
    
    printf("\nTipo de número longo: %lu\n", sizeof(numeroLongo));
    printf("Tipo de inteiro sem sinal: %lu\n", sizeof(intSemSinal));
    
    //printf("Resultado: %lu", );
    
   // SE um operando é **long** E o segundo é **unsigned int** E SE valor de **unsigned int** não pode ser representado por um **long**
   // ENTÃO os dois operandos são convertidos para **unsigned long**
}
