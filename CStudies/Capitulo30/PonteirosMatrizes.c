//
//  PonteirosMatrizes.c
//  CStudies
//
//  Created by Hatsumi Hashi on 18/10/17.
//  Copyright © 2017 Hatsumi Hashi. All rights reserved.
//

#include "PonteirosMatrizes.h"

void MatrizComIndexacao(char *s){
    register int t;
    
    printf("Acessar a matriz por indexação\n");
    for(t = 0; s[t]; ++t) printf("%c ", s[t]);
    
    printf("\n\n");
}

void MatrizComPonteiro(char *s){
    printf("Acessar a matriz com um ponteiro\n");
    
    while (*s) {
        printf("%c ", *s++);
    }
    
    printf("\n\n");
}
