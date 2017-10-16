//
//  InicializacaoDeMatrizes.c
//  CStudies
//
//  Created by Hatsumi Hashi on 13/10/17.
//  Copyright © 2017 Hatsumi Hashi. All rights reserved.
//

#include "InicializacaoDeMatrizes.h"

void InicializacaoMatriz(){
    int k;
    int i[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    for(k = 0; k < 10; k++)
        printf("%d ", i[k]);
}

void InicializacaoMatrizString(){
    int k;
    
    //Modo abreviado de inicializar uma matriz
    char string[30] = "Eu gosto de legumes.";
    
    for(k = 0; string[k] != '\0'; k++)
        printf("%c", string[k]);
    
    printf("\n");
    
    //Modo convencional de atribuição
    char string2[30] = {'E', 'u', ' ', 'g', 'o', 's', 't', 'o', ' ', 'd', 'e', ' ',
        'l', 'e', 'g', 'u', 'm', 'e', 's', '.', '\0'};
    
    for(k = 0; string2[k] != '\0'; k++)
        printf("%c", string2[k]);
}

void InicializacaoMatrizMultidimensional(){
    int i;
    int j;
    int matriz[10][2] = {
        11,12,
        21,22,
        31,32,
        41,42,
        51,52,
        61,62,
        71,72,
        81,82,
        91,92,
        101,102
    };
    
    for(i = 0; i < 10; i++){
        for(j = 0; j < 2; j++)
            printf("%d ", matriz[i][j]);
        printf("\n");
    }
}
