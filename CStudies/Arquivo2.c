//
//  Arquivo2.c
//  CStudies
//
//  Created by Hatsumi Hashi on 20/09/17.
//  Copyright © 2017 Hatsumi Hashi. All rights reserved.
//

#include <stdio.h>

extern int x,y;

void FuncaoQueUtilizaAsVariaveisGlobais2(){
    x = y / 10;
}

void FuncaoQueUtilizaAsVariaveisGlobais3(){
    y = 10;
}
