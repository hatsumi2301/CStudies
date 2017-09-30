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
    
    fonte = 10;
    m = &alvo;
    alvo = *m;
    
    printf("%d\n", alvo);
}
