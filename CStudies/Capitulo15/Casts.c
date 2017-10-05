//
//  Casts.c
//  CStudies
//
//  Created by Hatsumi Hashi on 04/10/17.
//  Copyright © 2017 Hatsumi Hashi. All rights reserved.
//

#include "Casts.h"

void Cast(){
    int i;
    
    //i é uma variável do tipo inteiro
    //(float)i/2 é o resultado em decimal da divisão
    for(i = 1; i <= 100; ++i) printf("Em números decimais %d/2 é: %f\n", i, (float)i/2);
    
    printf("\n");
    
    //i é uma variável do tipo inteiro
    //i/2 é o resultado inteiro da divisão
    for(i = 1; i <= 100; ++i) printf("Em números inteiros %d/2 é: %d\n", i, i/2);
}
