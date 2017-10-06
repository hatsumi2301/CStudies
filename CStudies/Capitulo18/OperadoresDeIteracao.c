//
//  OperadoresDeIteracao.c
//  CStudies
//
//  Created by Hatsumi Hashi on 05/10/17.
//  Copyright © 2017 Hatsumi Hashi. All rights reserved.
//

#include "OperadoresDeIteracao.h"

void ForIncremento(){
    int x;
    
    //Começando no número um
    //Enquanto o número for menor ou igual a 100
    //Soma 1 unidade a cada rodada do laço
    for(x = 1; x <= 100; x++) printf("%d ", x); //Imprime o valor de x
}

void ForDecremento(){
    int x;
    double z;
    
    //Começando no número 100
    //Enquanto o número for diferente de 65
    //Diminui 5 unidades a cada rodada do laço
    for(x = 100; x != 65; x -= 5){
        z = x * x;
        printf("O quadrado de %d, %f ", x, z); //Imprime o valor de x e z
    }
}

void ForNaoSeraExecutado(){
    int x;
    int y;
    
    x = 10;
    
    //Começando com o número 10
    //Se y for diferente de x
    //Soma 1 unidade a cada rodada do laço
    for(y = 10; y != x; ++y) printf("%d ", x); //Imprime o valor de x
    
    printf("Somente este comando será executado. Valor de y = %d e valor de x = %d", y, x);
}

void ForComDoisControles(){
    int x;
    int y;
    
    x = 10;
    
    //Começando com o número 0 em x e y
    //Se a soma de x e y for menor ou igual a 10
    //Soma 1 unidade em x a cada rodada do laço
    for(x = 0, y = 0; x + y <= 10; ++x){
        y++;
        printf("Valor de y = %d e valor de x = %d\n", y, x);
    }
}
