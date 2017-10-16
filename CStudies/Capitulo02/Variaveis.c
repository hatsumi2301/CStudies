//
//  Variaveis.c
//  CStudies
//
//  Created by Hatsumi Hashi on 24/09/17.
//  Copyright © 2017 Hatsumi Hashi. All rights reserved.
//

#include "Variaveis.h"

void TiposDeVariaveis(){
    //Declarar variável do tipo char (caractere)
    char caractere = 'a';
    
    //Declarar variável do tipo int (inteiro)
    int inteiro = 1;
    
    //Declarar variável do tipo float (ponto flutuante)
    float pontoFlutuante = 1.1;
    
    //Declarar variável do tipo double (ponto flutuante)
    double pontoFlutuanteDuplaPrecisao = 1.2;
    
    //Imprimir variável do tipo char
    printf("Caractere é um char: %c.\n", caractere);
    
    //Imprimir variável do tipo int
    printf("Inteiro é um int: %d.\n", inteiro);
    
    //Imprimir variável do tipo float
    printf("Ponto flutuante é um float: %f.\n", pontoFlutuante);
    
    //Imprimir variável do tipo double
    printf("Ponto flutuante de dupla precisão é um double: %f.\n", pontoFlutuanteDuplaPrecisao);
}

void NomeDaVariavel(){
    int x = 1;
    
    printf("Método: NomeDaVariavel. Nome da variável é x e o valor de x é %d.", x);
}

void NomeDaVariavelRepetido(){
    //O mesmo nome de variável pode ser utilizado em diferentes contextos
    int x = 2;
    
    //int x = 3; //Se essa linha for descomentada (apagando os "//"), será gerado um erro
    
    printf("Método: NomeDaVariavelRepetido.");
    printf(" Nome da variável é x e o valor de x é %d.", x);
    printf(" Essa variável está em um contexto diferente da variável x do método NomeDaVariavel");
}
