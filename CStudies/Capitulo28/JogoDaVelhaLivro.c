//
//  JogoDaVelhaLivro.c
//  CStudies
//
//  Created by Hatsumi Hashi on 16/10/17.
//  Copyright © 2017 Hatsumi Hashi. All rights reserved.
//

#include "JogoDaVelhaLivro.h"

void InicializarMatriz(){
    int i;
    int j;
    
    //Inicializa a matriz com espaços em branco
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            matriz[i][j] = ' ';
}

void ObterJogadaDoJogador(void){
    int x;
    int y;
    
    printf("Digite as coordenadas para a jogada: ");
    scanf("%d%d", &x, &y);
    
    //É necessário subtrair 1 unidade do x e do y para utiliza-los na matriz
    //Coordenada 1, 1 é equivalente ao index 0, 0 na matriz
    x--;
    y--;
    
    //Se a posição não estiver vazia
    if(matriz[x][y] != ' '){
        printf("Posição inválida, tente novamente!\n");
        ObterJogadaDoJogador();
    }
    //Senão coloca o valor 'X' na posição
    else matriz[x][y] = 'X';
}

void ObterJogadaDoComputador(){
    int i = 0;
    int j = 0;
    
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
            //Se a posição estiver vazia, sai do loop
            if(matriz[j][j] == ' ') break;
        //Se a posição estiver vazia, sai do loop
        if(matriz[i][j] == ' ') break;
    }
    
    //Se a matriz inteira foi verificada (as variáveis de controle i e j chegaram nos valores 3)
    //e não existiam espaços vazios
    //O resultado foi empate
    if(i * j == 9){
        printf("Empate!\n");
        //Termina o programa
        exit(0);
    }
    //Senão coloca o valor 'O' na posição encontrada
    else matriz[i][j] = 'O';
}

char Checar(){
    int i;
    
    //Verifica as linhas
    for(i = 0; i < 3; i++)
        if(matriz[i][0] != ' ' && matriz[i][0] == matriz[i][1] && matriz[i][0] == matriz[i][2])
            return matriz[i][0];

    //Verifica as colunas
    for(i = 0; i < 3; i++)
        if(matriz[0][i] != ' ' && matriz[0][i] == matriz[1][i] && matriz[0][i] == matriz[2][i])
            return matriz[0][i];
    
    //Testa diagonais
    if(matriz[0][0] != ' ' && matriz[0][0] == matriz[1][1] && matriz[1][1] == matriz[2][2])
        return matriz[0][0];
    if(matriz[0][2] != ' ' && matriz[0][2] == matriz[1][1] && matriz[1][1] == matriz[2][0])
        return matriz[0][2];
    
    return ' ';
}

void ImprimirMatriz(){
    int t;
    
    for(t = 0; t < 3; t++){
        printf(" %c | %c | %c ", matriz[t][0], matriz[t][1], matriz[t][2]);
        if(t != 2) printf("\n---|---|---\n");
    }
    printf("\n");
}

void JogoDaVelhaLivro(){
    char acabou = ' ';
    
    printf("Este é o jogo da velha.\n");
    printf("Você está jogando contra o computador.\n");
    
    InicializarMatriz();
    
    do{
        ImprimirMatriz();
        ObterJogadaDoJogador();
        acabou = Checar();
        if(acabou != ' ') break;
        ObterJogadaDoComputador();
        acabou = Checar();
    }while(acabou == ' ');
    
    if(acabou == 'X') printf("Você ganhou!!\n");
    else printf("Eu ganhei!!\n");
    
    ImprimirMatriz();
}
