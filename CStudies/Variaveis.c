//
//  Variaveis.c
//  CStudies
//
//  Created by Hatsumi Hashi on 20/09/17.
//  Copyright © 2017 Hatsumi Hashi. All rights reserved.
//

#include <stdio.h>

void TiposDeVariaveis(){
    char caractere = 'a';
    int inteiro = 1;
    float pontoFlutuante = 1.1;
    double pontoFlutuanteDuplaPrecisao = 1.2;
    
    printf("Caractere é um char: %c.\n", caractere);
    printf("Inteiro é um int: %d.\n", inteiro);
    printf("Ponto flutuante é um float: %f.\n", pontoFlutuante);
    printf("Ponto flutuante de dupla precisão é um double: %f.\n", pontoFlutuanteDuplaPrecisao);
}

void ModificadoresDeVariaveis(){
    printf("Tipo                bits    Faixa mínima\n");
    printf("char                8       -127 a 127\n");
    printf("unsigned char       8       0 a 255\n");
    printf("signed char         8       -127 a 127\n");
    printf("int                 16      -32.767 a 32.767\n");
    printf("unsigned int        16      0 a 65.535\n");
    printf("signed int          16      0 a 65.535\n");
    printf("short int           16      0 a 65.535\n");
    printf("unsigned short int  16      0 a 65.535\n");
    printf("signed short int    16      0 a 65.535\n");
    printf("long int            32      -2.147.483.647 a 2.147.483.637\n");
    printf("signed long int     32      -2.147.483.647 a 2.147.483.637\n");
    printf("unsigned long int   32      0 a 4.294.967.295\n");
    printf("float               32      seis dígitos de precisão\n");
    printf("double              64      dez dígitos de precisão\n");
    printf("long dougle         80      dez dígitos de precisão\n");
}

void VariavelDoTipoConst(const char *palavra)
{
    while(*palavra){
        if(*palavra == ' ') printf("%c", '-');
        else printf("%c", *palavra);
        palavra++;
    }
    printf("\nO uso do const no parâmetro de entrada do método, faz com que o código da função não seja capaz de modificar o objeto apontado pelo parâmetro.\n");
    printf("\nApenas um evento externo pode modificar uma variável do tipo const.\n");
}

void VariavelDoTipoVolatile(){
    printf("O modificador volatile é usado para informar ao compilador que o valor de uma variável pode ser alterado de uma maneira não explicitamente especificada pelo programa.\n");
    printf("Exemplo, um endereço de uma variável global pode ser passado para a rotina de relógio do sistema operacional e usado para guardar o tempo real do sistema.\n");
}

void EspecificadorExtern(){
    printf("Ocorreria um erro se fossem declaradas duas variáveis globais com o mesmo nome em arquivos diferentes de um mesmo projeto.\nA solução seria declarar todas as variáveis globais em um arquivo e usar declarações externo nos outros.\n");
    printf("Vide as classes main (as variáveis globais) e Arquivo2 para exemplos de Extern.\n");
}

void EspecificadorStatic(){
    printf("São variáveis permanentes. Não são reconhecidas fora de sua função ou arquivo, mas mantém seus valores entre chamadas.\n");
}
