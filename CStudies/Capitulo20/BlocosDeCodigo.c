//
//  BlocosDeCodigo.c
//  CStudies
//
//  Created by Hatsumi Hashi on 08/10/17.
//  Copyright © 2017 Hatsumi Hashi. All rights reserved.
//

#include "BlocosDeCodigo.h"

//Começa o bloco1
//Indica o início e fim de uma função
void Bloco(){
    int i;
    
    //Esse bloco de código (chaves) é desnecessário
    //Foi somente utilizado para exemplificar o que é um bloco de código
    //Começa o bloco2
    {
        i = 120;
        printf("%d\n", i);
    }
    //Termina o bloco2
    
    //Começa o bloco3
    //Indica os comandos que devem ser executados caso a condição do if seja verdadeira
    //Nesse exemplo, esse bloco de código seria desnecessário
    //Pois existe apenas um comando a ser executado dentro do if
    if(i == 120){
        printf("%d\n", i);
    }
    //Termina o bloco3
}
//Termina o bloco1
