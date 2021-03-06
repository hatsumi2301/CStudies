//
//  OperadoresDeDesvio.c
//  CStudies
//
//  Created by Hatsumi Hashi on 07/10/17.
//  Copyright © 2017 Hatsumi Hashi. All rights reserved.
//

#include "OperadoresDeDesvio.h"

int ReturnInt(){
    return 1;
}

char ReturnChar(){
    return 'a';
}

void SemReturn(){
    printf("Método sem return\n");
}

float ReturnFloat(){
    return 1.1;
}

//Código comentado para evitar warnings
//Função retorna uma variável com valor não inicializado
//Ao chamar a função, se formos verificar o valor de i
//Será um valor de lixo na memória
/*int ReturnVazio(){
    int i;

    return i;
}*/

void ComandoGoto(){
    int x = 1;
    
    loop1: //Rótulo loop1
        x++;
        printf("%d ", x);

    //Se x for menor que 100, então vá para o rótulo loop1
    if(x < 100) goto loop1;
}

void ComandoBreak(){
    int t;
    
    //Executar o laço de 0 até 100
    for(t = 0; t < 100; t++){
        printf("%d ", t);
        //Quando 1 for igual a 10, sai do laço, ou seja, não será executado até o 100
        if(t == 10) break;
    }
}

void SwitchCaseComBreak(){
    int x;
    
    for(x = 0; x < 5; x++){
        switch (x) {
            case 1:
                printf("%d\n", x);
                break; //A próxima linha executada será o printf após o switch case
            case 2:
                printf("%d\n", x);
                break; //A próxima linha executada será o printf após o switch case
            case 3:
                printf("%d\n", x);
                break; //A próxima linha executada será o printf após o switch case
            case 4:
                printf("%d\n", x);
                break; //A próxima linha executada será o printf após o switch case
            case 5:
                printf("%d\n", x);
                break; //A próxima linha executada será o printf após o switch case
        }
        
        printf("Linha executada após o break.\n");
    }
}

void ComandoExit(){
    exit(0); //Termina a execução do programa
}

void ComandoContinue(){
    char fim;
    char ch;
    
    fim = 0;
    
    while(!fim){
        printf("\n\nDigite um valor: ");
        scanf(" %c", &ch);
        if(ch == '$'){
            fim = 1;
            continue;
        }
        printf("Valor codificado: ");
        putchar(ch + 1); //Desloca o alfabeto uma posição
    }
}
