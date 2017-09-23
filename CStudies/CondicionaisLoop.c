//
//  CondicionaisLoop.c
//  CStudies
//
//  Created by Hatsumi Hashi on 20/09/17.
//  Copyright © 2017 Hatsumi Hashi. All rights reserved.
//

#include <stdio.h>

int Entrada2(){
    int numero;
    
    printf( "Insira um número: " );
    scanf( "%d", &numero );
    printf( "Você inseriu o número %d.\n", numero );
    getchar();
    
    return numero;
}

void Condicionais(){
    int numero = Entrada2();
    
    if ( numero == 1 ) {
        printf("Executa esse comando se a condição do primeiro if for verdadeira.\n");
        printf("A condição do if vai ser verdadeira se o número for igual a 1.\n");
    }
    else if(numero == 2){
        printf("Executa esse comando se a condição do primeiro if for falsa e a condição do segundo if for verdadeira.\n");
        printf("A condição do if vai ser verdadeira se o número for igual a 2.\n");
    }
    else {
        printf("Executa esse comando se a condição dos ifs forem falsas.\n");
    }
}

void LoopFor(){
    printf("Esse método chama o método 'Condicionais' três vezes.\n\n");
    
    for (int i = 0; i < 3; i++){
        printf("\nMétodo 'Condicionais' foi chamado %d vezes.\n\n", i + 1);
        
        Condicionais();
    }
}

void LoopWhile(){
    int i = 0;
    
    printf("Esse método chama o método 'Entrada' três vezes.\n\n");
    
    while(i < 3){
        printf("\nMétodo 'Entrada' foi chamado %d vezes.\n\n", i + 1);
        
        Entrada2();
        
        i++;
    }
}

void LoopDoWhile(){
    int i = 0;
    
    printf("Esse método chama o método 'Entrada' três vezes.\n\n");
    
    do{
        printf("\nMétodo 'Entrada' foi chamado %d vezes.\n\n", i + 1);
        
        Entrada2();
        
        i++;
    }while(i < 3);
}

void DiferencaEntreLoopWhileAndDoWhile(){
    int numero = 0;
    
    int i = 0;
    while(i < numero){
        printf("Método while não vai ser executado.\n");
        
        i++;
    }
    
    do{
        printf("Método do while vai ser executado.\n");
        
        i++;
    }while(i < numero);
}
