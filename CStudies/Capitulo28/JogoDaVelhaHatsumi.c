//
//  JogoDaVelhaHatsumi.c
//  CStudies
//
//  Created by Hatsumi Hashi on 16/10/17.
//  Copyright © 2017 Hatsumi Hashi. All rights reserved.
//

#include "JogoDaVelhaHatsumi.h"

void InicializaOTabuleiro(){
    int i;
    int j;
    
    //Inicializa o tabuleiro com espaços hífens
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            tabuleiro[i][j] = '-';
}

//Retorna '-' se existem espaços vazios no tabuleiro
//Retorna 1 se o jogador 1 venceu
//Retorna 0 se o jogador 0 venceu
//Retorna 2 se deu empate
char Verificar(){
    int i;
    int j;
    char elemento;
    
    elemento = tabuleiro[0][0];
    
    if(elemento == '1' || elemento == '0'){
        if(elemento == tabuleiro[0][1] && elemento == tabuleiro[0][2])
            return elemento;
        
        else if(elemento == tabuleiro[1][0] && elemento == tabuleiro[2][0])
            return elemento;
        
        else if(elemento == tabuleiro[1][1] && elemento == tabuleiro[2][2])
            return elemento;
    }
    
    elemento = tabuleiro[0][1];
    
    if(elemento == '1' || elemento == '0'){
        if(elemento == tabuleiro[1][1] && elemento == tabuleiro[2][1])
            return elemento;
    }
    
    elemento = tabuleiro[0][2];
    
    if(elemento == '1' || elemento == '0'){
        if(elemento == tabuleiro[1][2] && elemento == tabuleiro[2][2])
            return elemento;
        
        else if(elemento == tabuleiro[1][1] && elemento == tabuleiro[2][0])
            return elemento;
    }
    
    elemento = tabuleiro[1][0];
    
    if(elemento == '1' || elemento == '0'){
        if(elemento == tabuleiro[1][1] && elemento == tabuleiro[1][2])
            return elemento;
    }
    
    elemento = tabuleiro[2][0];
    
    if(elemento == '1' || elemento == '0'){
        if(elemento == tabuleiro[2][1] && elemento == tabuleiro[2][2])
            return elemento;
    }
    
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            if(tabuleiro[i][j] == '-'){
                return '-';
            }
    
    return '2';
}

//Imprime o tabuleiro
void ImprimirTabuleiro(){
    int i;
    int j;
    
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
            printf("%c ", tabuleiro[i][j]);
        printf("\n");
    }
    
    printf("\n");
}

//Usuário informa uma linha e coluna para realizar a jogada
//Caso a linha esteja vazia, é realizada a jogada
//Senão, o usuário precisa tentar novamente
void ReceberValor(){
    int i;
    int j;
    
    printf("Informe as coordenadas da matriz: ");
    scanf("%d%d", &i, &j);
    
    //É necessário subtrair 1 unidade do x e do y para utiliza-los na matriz
    //Coordenada 1, 1 é equivalente ao index 0, 0 na matriz
    i--;
    j--;
    
    //Se a posição não estiver vazia
    if(tabuleiro[i][j] != '-'){
        printf("\nValor inválido. Tente novamente!\n\n");
        ReceberValor();
    }
    //Senão, coloca o valor 1 na posição
    else tabuleiro[i][j] = '1';
}

//Coloca o número 0 no primeiro espaço vazio que encontrar
void VezDoRobo(){
    int i;
    int j;
    
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++){
            //Se a posição estiver vazia
            //Coloca o valor 0 na posição e sai do método
            if(tabuleiro[i][j] == '-'){
                tabuleiro[i][j] = '0';
                return;
            }
        }
}

void JogoDaVelhaVersaoHatsumi(){
    char espacosVazios = '-';
    
    InicializaOTabuleiro();
    
    do{
        ReceberValor();
        
        printf("\nSua jogada!\n");
        ImprimirTabuleiro();
        
        espacosVazios = Verificar();
        if(espacosVazios != '-') break;
        
        VezDoRobo();
        
        printf("\nJogada do robô!\n");
        ImprimirTabuleiro();
        
        espacosVazios = Verificar();
    }while(espacosVazios == '-');
 
    switch (espacosVazios) {
        case '0':
            printf("Você perdeu!!\n");
            break;
        case '1':
            printf("Parabéns, você venceu!!\n");
            break;
        case '2':
            printf("Deu empate!!\n");
            break;
    }
}
