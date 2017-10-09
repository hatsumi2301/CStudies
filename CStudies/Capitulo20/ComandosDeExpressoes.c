//
//  ComandosDeExpressoes.c
//  CStudies
//
//  Created by Hatsumi Hashi on 08/10/17.
//  Copyright © 2017 Hatsumi Hashi. All rights reserved.
//

#include "ComandosDeExpressoes.h"

void func(void);
int f(void);

void Expressoes(){
    int a;
    int b;
    int c;
    
    b = 1;
    c = 2;
    
    func(); //uma chamada a uma função
    a = b + c; //um comando de atribuição
    b + f(); //um comando válido que não faz nada
    ; //um comando vazio
}

void func(){
    printf("Chamada de uma função\n");
}

int f(){
    return 10;
}
