//
//  OperadoresPonteiros.c
//  CStudies
//
//  Created by Hatsumi Hashi on 29/09/17.
//  Copyright © 2017 Hatsumi Hashi. All rights reserved.
//

#include "OperadoresPonteiros.h"

void OperadoresPonteiros(){
    int alvo, fonte;
    int *m;
    
    //O valor 10 é atribuído à variável fonte
    fonte = 10;
    //O ponteiro m recebe o valor do endereço na memória de fonte
    m = &fonte;
    //A variável alvo recebe o valor que está guardado no endereço da memória de m
    alvo = *m;
    
    printf("%d\n", alvo);
}
