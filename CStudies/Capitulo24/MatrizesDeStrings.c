//
//  MatrizesDeStrings.c
//  CStudies
//
//  Created by Hatsumi Hashi on 10/10/17.
//  Copyright © 2017 Hatsumi Hashi. All rights reserved.
//

#include "MatrizesDeStrings.h"

void MatrizDeString(){
    register int t;
    register int i;
    register int j;
    
    printf("Digite 9 para sair.\n");
    
    for(t = 0; t < MAX; t++){
        printf("%d: ", t);
        scanf(" %c", texto[t]);
        //Se o valor de texto na posição t for igual a 0, sai do loop
        if(*texto[t] == '9') break;
    }
    
    for(i = 0; i < t; i++){
        for(j = 0; texto[i][j]; j++) putchar(texto[i][j]);
        putchar('\n');
    }
}
