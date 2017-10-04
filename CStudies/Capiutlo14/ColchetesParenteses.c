//
//  ColchetesParenteses.c
//  CStudies
//
//  Created by Hatsumi Hashi on 03/10/17.
//  Copyright © 2017 Hatsumi Hashi. All rights reserved.
//

#include "ColchetesParenteses.h"

//Cria um array com 80 posições
char string[80];

void Array(){
    //Atribui o valor x na posição 3 do array
    string[3] = 'c';
    
    //Imprime o valor da posição 3
    printf("%c\n\n", string[3]);
}

void Parenteses(){
    //Operação com parênteses, a soma será realizada primeiro
    int x = (1 + 2) * 3;
    
    printf("x = (1 + 2) * 3 = %d\n", x);
    
    //Operação sem parênteses, a multiplicação será realizada primeiro
    int y = 1 + 1 * 2;
    
    printf("y = 1 + 2 * 3 = %d\n", y);
}
