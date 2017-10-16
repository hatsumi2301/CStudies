//
//  MatrizesBidimensionais.h
//  CStudies
//
//  Created by Hatsumi Hashi on 09/10/17.
//  Copyright © 2017 Hatsumi Hashi. All rights reserved.
//

#ifndef MatrizesBidimensionais_h
#define MatrizesBidimensionais_h

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

#define CLASSES 3
#define NOTAS 30

int nota[CLASSES][NOTAS];

void InserirNota(void);
int ObterNota(int numero);
void ExibirNotas(int nota[][NOTAS]);

#endif /* MatrizesBidimensionais_h */
