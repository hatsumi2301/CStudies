//
//  MatrizesBidimensionais.c
//  CStudies
//
//  Created by Hatsumi Hashi on 09/10/17.
//  Copyright © 2017 Hatsumi Hashi. All rights reserved.
//

#include "MatrizesBidimensionais.h"
#include <ctype.h>
#include <stdlib.h>

#define CLASSES 3
#define NOTAS 30

int nota[CLASSES][NOTAS];

void InserirNota(void);
int ObterNota(int numero);
void ExibirNotas(int nota[][NOTAS]);

void MatrizBidimensional(){
    int t;
    int i;
    int num[3][4];
    
    for(t = 0; t < 3; ++t) //Laço que controla o primeiro índice da matriz
        for(i = 0; i < 4; ++i) //Laço que controla o segundo índice da matriz
            num[t][i] = (t * 4) + i + 1;
    
    for(t = 0; t < 3; ++t){
        for(i = 0; i < 4; ++i)
            printf("%3d ", num[t][i]);
        printf("\n");
    }
}

void NotasDosAlunos(){
    char ch = '\0';
    char str[80];
    
    for(;;){
        do{
            printf("(I)nserir as notas\n");
            printf("(E)xibir as notas\n");
            printf("(S)air\n");
            
            scanf(" %c", str);
            
            ch = toupper(*str);
        }while((ch != 'I') && (ch != 'E') && (ch != 'S'));
        
        switch (ch) {
            case 'I':
                InserirNota();
                break;
            case 'E':
                ExibirNotas(nota);
                break;
            case 'S':
                exit(0);
                break;
        }
    }
}

void InserirNota(){
    int t;
    int i;
    
    for(t = 0; t < CLASSES; t++){
        printf("Turma #%d: \n", t + 1);
        for(i = 0; i < NOTAS; ++i){
            nota[t][i] = ObterNota(i);
        }
    }
}

int ObterNota(int numero){
    char s[80];
    
    printf("Digite a nota do aluno #%d: \n", numero);
    scanf(" %s", s);
    return (atoi(s));
}

void ExibirNotas(int nota[][NOTAS]){
    int t;
    int i;
    
    for(t = 0; t < CLASSES; ++t){
        printf("Turma #%d: \n", t + 1);
        for(i = 0; i < NOTAS; ++i){
            printf("Aluno #%d é %d\n", i + 1, nota[t][i]);
        }
    }
}

