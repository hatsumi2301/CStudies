//
//  main.c
//  CStudies
//
//  Created by Hatsumi Hashi on 05/09/17.
//  Copyright © 2017 Hatsumi Hashi. All rights reserved.
//

#include <stdio.h>

void Saida();
void Entrada();

int main()
{
    Entrada();
}

void Saida(){
    printf( "Olá mundo!\n" );
    getchar();
}

void Entrada(){
    int numero;
    
    printf( "Insira um número: " );
    scanf( "%d", &numero );
    printf( "Você inseriu o número %d\n", numero );
    getchar();
}

