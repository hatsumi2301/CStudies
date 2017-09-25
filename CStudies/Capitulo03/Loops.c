//
//  Loops.c
//  CStudies
//
//  Created by Hatsumi Hashi on 24/09/17.
//  Copyright © 2017 Hatsumi Hashi. All rights reserved.
//

#include "Loops.h"
#include "Saida.h"
#include "Entrada.h"
#include <string.h>

#define MAX_STRING_LEN 80

void Saida(void);
void EntradaNumero(void);

void VerificarCaractereNaString(){
    char *ponteiroPalavra;
    char palavra[MAX_STRING_LEN];
    char caractere;
    char texto[] = "A palavra não contém a letra.\n";
    
    printf("Informe uma palavra: ");
    scanf("%s",palavra);
    
    ponteiroPalavra = &palavra[0];
    
    printf("\nInforme uma letra: ");
    scanf(" %c", &caractere);
    
    while(*ponteiroPalavra)
    {
        if(*ponteiroPalavra == caractere){
            strcpy(texto, "\nA palavra contém a letra.\n");
            break;
        }
        else ponteiroPalavra++;
    }
    
    printf("%s", texto);
}

int VerificarCaractereNaString2(char *s, char c){
    while(*s)
        if(*s == c) return 1;
        else s++;
    
    return 0;
}

void LoopFor(){
    printf("Esse método chama o método 'Saida' três vezes.\n\n");
    
    for (int i = 0; i < 3; i++){
        printf("\nMétodo 'Saida' foi chamado %d vezes.\n\n", i + 1);
        
        Saida();
    }
}

void LoopWhile(){
    int i = 0;
    
    printf("Esse método chama o método 'EntradaNumero' três vezes.\n\n");
    
    while(i < 3){
        printf("\nMétodo 'EntradaNumero' foi chamado %d vezes.\n\n", i + 1);
        
        EntradaNumero();
        
        i++;
    }
}

void LoopDoWhile(){
    int i = 0;
    
    printf("Esse método chama o método 'EntradaNumero' três vezes.\n\n");
    
    do{
        printf("\nMétodo 'EntradaNumero' foi chamado %d vezes.\n\n", i + 1);
        
        EntradaNumero();
        
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
