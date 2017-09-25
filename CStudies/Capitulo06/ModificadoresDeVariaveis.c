//
//  ModificadoresDeVariaveis.c
//  CStudies
//
//  Created by Hatsumi Hashi on 24/09/17.
//  Copyright © 2017 Hatsumi Hashi. All rights reserved.
//

#include "ModificadoresDeVariaveis.h"

void VariavelDoTipoConst(const char *frase){
    while(*frase){
        if(*frase == ' ') printf("%c", '-');
        else printf("%c", *frase);
        frase++;
    }
}

void VariavelDoTipoVolatile(){
    //http://www.geeksforgeeks.org/understanding-volatile-qualifier-in-c/
    const int local = 10;
    int *ptr = (int*) &local;
    
    printf("Valor inicial: %d \n", local);
    
    *ptr = 100;
    
    printf("Valor modificado: %d \n", local);
}
