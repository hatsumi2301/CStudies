//
//  main.c
//  CStudies
//
//  Created by Hatsumi Hashi on 05/09/17.
//  Copyright © 2017 Hatsumi Hashi. All rights reserved.
//

#include <stdio.h>

void Saida();
int Entrada();
void Condicionais();

int main()
{
    Condicionais();
}

void Saida(){
    printf( "Olá mundo!\n" );
    getchar();
}

int Entrada(){
    int numero;
    
    printf( "Insira um número: " );
    scanf( "%d", &numero );
    printf( "Você inseriu o número %d.\n", numero );
    getchar();
    
    return numero;
}

void Condicionais(){
    int numero = Entrada();

    
    if ( numero == 1 ) {
        printf("Executa esse comando se a condição do if for verdadeira.\n");
        printf("A condição do if vai ser verdadeira se o número for igual a 1.\n");
    }
    else {
        printf("Executa esse comando se a condição do if for falsa.\n");
    }
}
