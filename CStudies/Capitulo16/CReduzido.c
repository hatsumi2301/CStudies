//
//  CReduzido.c
//  CStudies
//
//  Created by Hatsumi Hashi on 04/10/17.
//  Copyright © 2017 Hatsumi Hashi. All rights reserved.
//

#include "CReduzido.h"

void SomaReduzida(){
    int x = 10;
    int y = 10;
    
    //Soma 1 unidade na variável x
    x = x + 1;
    //Soma 1 unidade na variável y
    //Código escrito de maneira reduzida
    y += 1;
    
    printf("x = 10\nx = x + 1 = %d\n\n", x);
    printf("y = 10\ny += 1 = %d\n\n\n", y);
}

void SubtracaoReduzida(){
    int x = 10;
    int y = 10;
    
    //Subtrai 1 unidade na variável x
    x = x - 1;
    //Subtrai 1 unidade na variável y
    //Código escrito de maneira reduzida
    y -= 1;
    
    printf("x = 10\nx = x - 1 = %d\n\n", x);
    printf("y = 10\ny -= 1 = %d\n\n\n", y);
}

void MultiplicacaoReduzida(){
    int x = 10;
    int y = 10;
    
    //Multiplica por 2 a variável x
    x = x * 2;
    //Multiplica por 2 a variável y
    //Código escrito de maneira reduzida
    y *= 2;
    
    printf("x = 10\nx = x * 2 = %d\n\n", x);
    printf("y = 10\ny *= 2 = %d\n\n\n", y);
}

void DivisaoReduzida(){
    int x = 10;
    int y = 10;
    
    //Divide por 2 a variável x
    x = x / 2;
    //Divide por 2 a variável y
    //Código escrito de maneira reduzida
    y /= 2;
    
    printf("x = 10\nx = x / 2 = %d\n\n", x);
    printf("y = 10\ny /= 2 = %d\n\n\n", y);
}

void ModuloReduzido(){
    int x = 3;
    int y = 3;
    
    //Resto da divisão de x por 2
    x = x % 2;
    //Resto da divisão de y por 2
    //Código escrito de maneira reduzida
    y %= 2;
    
    printf("x = 3\nx = x %% 2 = %d\n\n", x);
    printf("y = 3\ny %%= 2 = %d\n\n\n", y);
}
