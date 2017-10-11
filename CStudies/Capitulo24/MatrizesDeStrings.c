//
//  MatrizesDeStrings.c
//  CStudies
//
//  Created by Hatsumi Hashi on 10/10/17.
//  Copyright © 2017 Hatsumi Hashi. All rights reserved.
//

#include "MatrizesDeStrings.h"

#define MAX 100
#define LEN 80

char texto[MAX][LEN];

void MatrizDeString(){
    register int t;
    register int i;
    register int j;
    
    printf("Digite uma linha vazia para sair.\n");
    
    for(t = 0; t < MAX; t++){
        printf("%d: ", t);
        scanf(" %s", texto[t]);
        if(!*texto[t]) break; //Se o valor de texto na posição t for igual a 0, sai do loop
    }
    
    for(i = 0; i < t; i++){
        for(j = 0; texto[i][j]; j++) putchar(texto[i][j]);
        putchar('\n');
    }
}
