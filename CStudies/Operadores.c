//
//  Operadores.c
//  CStudies
//
//  Created by Hatsumi Hashi on 22/09/17.
//  Copyright © 2017 Hatsumi Hashi. All rights reserved.
//

#include <stdio.h>

void Modulo(){
    printf("Não pode ser usado nos tipos em ponto flutuante.\n");
    
    int x, y;
    
    x = 5;
    y = 2;
    
    printf("%d/%d = %d\n", x, y, x/y);
    printf("%d%%%d = %d\n", x, y, x%y);
    
    x = 1;
    y = 2;
    
    printf("%d/%d = %d \n%d%%%d = %d errado\n", x, y, x/y, x, y, x%y);
}
