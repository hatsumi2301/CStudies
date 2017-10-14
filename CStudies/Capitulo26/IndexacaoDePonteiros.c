//
//  IndexacaoDePonteiros.c
//  CStudies
//
//  Created by Hatsumi Hashi on 13/10/17.
//  Copyright © 2017 Hatsumi Hashi. All rights reserved.
//

#include "IndexacaoDePonteiros.h"

int numeros[10][10];

void ImprimeLinha(int j){
    int *p;
    int t;
    
    p = &numeros[j][0]; //Obtém o endereço do primeiro elemento da linha
    
    for(t = 0; t < 10; t++)
        printf("%d ", *(p+t)); //Imprime todos os elementos da linha
}
