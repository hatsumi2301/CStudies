//
//  OperadoresTernarios.c
//  CStudies
//
//  Created by Hatsumi Hashi on 29/09/17.
//  Copyright © 2017 Hatsumi Hashi. All rights reserved.
//

#include "OperadoresTernarios.h"

void OperadorTernario(){
    int x, y;
    
    x = 10;
    //Se x for maior que 9, então y recebe o valor de 100, senão recebe o valor de 200
    y = x > 9 ? 100 : 200;
    
    printf("Resultado do código utilizando operador ternário\nx = 10\nSe x for maior que 9, então y vai ter o valor 100, senão, y vai ter o valor de 200.\ny = %d\n\n", y);
}

void ExemploComIfElseOperadorTernario(){
    //Esse exemplo é igual ao do método acima, mas utilizando o if e else
    int x, y;
    
    x = 10;
    if(x > 9) y = 100;
    else y = 200;
    
    printf("Resultado do código utilizando if e else\nx = 10\nSe x for maior que 9, então y vai ter o valor 100, senão, y vai ter o valor de 200.\ny = %d\n\n", y);
}
