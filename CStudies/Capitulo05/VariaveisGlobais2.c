//
//  VariaveisGlobais2.c
//  CStudies
//
//  Created by Hatsumi Hashi on 24/09/17.
//  Copyright © 2017 Hatsumi Hashi. All rights reserved.
//

#include "VariaveisGlobais2.h"

extern int x,y;

void FuncaoQueUtilizaAsVariaveisGlobais2(){
    x = y / 10;
    
    printf("\"x\" e \"y\" são utilizadas no método da classe \"VariaveisGlobais2\"\n");
}

void FuncaoQueUtilizaAsVariaveisGlobais3(){
    y = 10;
    
    printf("\"y\" é utilizada no método da classe \"VariaveisGlobais2\"\n");
}
