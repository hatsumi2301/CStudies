//
//  MatrizesMultidimensionais.c
//  CStudies
//
//  Created by Hatsumi Hashi on 10/10/17.
//  Copyright © 2017 Hatsumi Hashi. All rights reserved.
//

#include "MatrizesMultidimensionais.h"

void MatrizMultidimensional(){
    int matriz[3][3][3];
    int i;
    int j;
    int k;
    
    for(i = 0; i < 3; i++) //Laço para o primeiro índice
        for(j = 0; j < 3; j++) //Laço para o segundo índice
            for(k = 0; k < 3; k++) //Laço para o terceiro índice
                matriz[i][j][k] = i + j + k;
    
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            for(k = 0; k < 3; k++)
                printf("matriz[%d][%d][%d] = %d\n", i, j, k, matriz[i][j][k]);
}
