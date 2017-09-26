//
//  ModificadoresDeVariaveis.c
//  CStudies
//
//  Created by Hatsumi Hashi on 24/09/17.
//  Copyright © 2017 Hatsumi Hashi. All rights reserved.
//

#include "ModificadoresDeVariaveis.h"

void VariavelDoTipoConst(const char *frase){
    //O const é utilizado para que a frase inicial não seja modificada
    while(*frase){
        if(*frase == ' ') printf("%c", '-'); //Se o caractere for um espaço em branco, imprime "-"
        else printf("%c", *frase);//Senão imprime o caractere
        frase++;
    }
}

void VariavelDoTipoVolatile(){
    //Exemplo do site: http://www.geeksforgeeks.org/understanding-volatile-qualifier-in-c/
    const volatile int local = 10; //Inicializa uma variável como const e volatile
    int *ponteiro = (int*) &local; //O valor do endereço de memória de "local" é atribuido ao ponteiro "ponteiro"
    
    printf("Valor inicial da variável local: %d \n", local); //Imprime o valor da variável local
    
    *ponteiro = 100; //O valor de local é alterado por meio do ponteiro "ponteiro"
    
    printf("Valor modificado da variável local: %d \n", local);
}
