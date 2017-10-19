//
//  PonteirosMatrizes.c
//  CStudies
//
//  Created by Hatsumi Hashi on 18/10/17.
//  Copyright © 2017 Hatsumi Hashi. All rights reserved.
//

#include "PonteirosMatrizes.h"

void MatrizComIndexacao(char *s){
    register int t;
    
    printf("Acessar a matriz por indexação\n");
    for(t = 0; s[t]; ++t) printf("%c ", s[t]);
    
    printf("\n\n");
}

void MatrizComPonteiro(char *s){
    printf("Acessar a matriz com um ponteiro\n");
    
    while (*s) {
        printf("%c ", *s++);
    }
    
    printf("\n\n");
}

//Função recebe matriz de ponteiros
void ExibirArray(int *matrizPonteiros[]){
    int i;
    
    for(i = 0; i < 10; i++) printf("%d ", *matrizPonteiros[i]);
}

//Função recebe matriz de ponteiros
void ExibirArray2(int *matrizPonteiros[10]){
    int i;
    
    for(i = 0; i < 10; i++) printf("%d ", *matrizPonteiros[i]);
}

//Função recebe matriz de ponteiros
void ExibirArray3(int *matrizPonteiros){
    int i;
    
    for(i = 0; i < 10; i++) printf("%d ", *matrizPonteiros++);
}

void ExibirArrayChamada(){
    int i;
    int matriz[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    //Matriz de ponteiros
    int *matrizPonteiros[10];
    
    //Coloca o endereço dos elementos na matriz de ponteiros
    for(i = 0; i < 10; i++) matrizPonteiros[i] = &matriz[i];
    
    printf("\nPassando matriz como parâmetro sem informar o tamanho\n");
    ExibirArray(matrizPonteiros);
    printf("\nPassando matriz como parâmetro informando o tamanho\n");
    ExibirArray2(matrizPonteiros);
    printf("\nPassando o ponteiro da matriz como parâmetro\n");
    ExibirArray3(*matrizPonteiros);
}
