//
//  Loops.c
//  CStudies
//
//  Created by Hatsumi Hashi on 24/09/17.
//  Copyright © 2017 Hatsumi Hashi. All rights reserved.
//

#include "Loops.h"

void VerificarCaractereNaString(){
    char *ponteiroPalavra; //Ponteiro aponta para o endereço de memória
    char palavra[MAX_STRING_LEN]; //Array de chars com MAX_STRING_LEN de comprimento
    char caractere;
    //Não é necessário informar o comprimento do array de chars
    //Pois ele vai obter o tamanho da string que é atribuída à ele.
    char texto[] = "A palavra não contém a letra.\n";
    
    printf("Informe uma palavra: ");
    //Não é necessário informar o tamanho do array e o &
    //O dado será armazenado na variável palavra,
    //sendo o primeiro caractere armazenado na posição 0 do array,
    //o segundo caractere na posição 1 e assim consecutivamente.
    scanf("%s", palavra);
    
    //Atribui o valor endereço do primeiro caractere do array de chars na variável ponteiro
    ponteiroPalavra = &palavra[0];
    
    printf("\nInforme uma letra: ");
    scanf(" %c", &caractere);
    
    while(*ponteiroPalavra) //Enquanto o ponteiro apontar para alguma letra da palavra
    {
        if(*ponteiroPalavra == caractere){ //Se a letra atual é igual ao caractere
            //Copia o texto "A palavra contém a letra." para a variável texto
            strcpy(texto, "\nA palavra contém a letra.\n");
            break;
        }
        else ponteiroPalavra++; //Avança um espaço na memória
    }
    
    printf("%s", texto);
}

int VerificarCaractereNaString2(char *s, char c){
    while(*s) //Enquanto o ponteiro apontar para alguma letra da palavra
        //Se a letra atual é igual ao caractere retorna o valor 1 e finaliza o método
        if(*s == c) return 1;
        else s++; //Avança um espaço na memória
    
    return 0; //Se o caractere não estiver na palavra, será retornado o valor 0
}

void LoopFor(){
    printf("Esse método chama o método 'Saida' três vezes.\n\n");
    
    //Declara a variável de controle i e inicializa com o valor 0
    //Enquanto i for menor que 3
    //Soma uma unidade no valor da variável i
    for (int i = 0; i < 3; i++){
        printf("\nMétodo 'Saida' foi chamado %d vezes.\n\n", i + 1);
        
        Saida();
    }
}

void LoopWhile(){
    int i = 0;
    
    printf("Esse método chama o método 'EntradaNumero' três vezes.\n\n");
    
    //Enquanto i for menor que 3
    while(i < 3){
        printf("\nMétodo 'EntradaNumero' foi chamado %d vezes.\n\n", i + 1);
        
        EntradaNumero();
        
        //Soma uma unidade no valor da variável de controle i
        i++;
    }
}

void LoopDoWhile(){
    int i = 0;
    
    printf("Esse método chama o método 'EntradaNumero' três vezes.\n\n");
    
    //Será executado pelo menos uma vez
    do{
        printf("\nMétodo 'EntradaNumero' foi chamado %d vezes.\n\n", i + 1);
        
        EntradaNumero();
        
        i++;
    }//Executa a condição do laço de repetição
    //Caso ela seja verdadeira, executa o método novamente.
    while(i < 3);
}

void DiferencaEntreLoopWhileAndDoWhile(){
    int numero = 0;
    
    int i = 0;
    
    //A verificação da condição para a execução do "while" é executada primeiro
    //Por isso, se a condição for falsa, o código no escopo abaixo
    while(i < numero){
        printf("Método while não vai ser executado.\n");
        
        i++;
    }
    
    //O do while executa o código pelo menos uma vez/
    //Pois a condição de execução é realizada somente após terminar de rodar o código dentro do escopo abaixo
    do{
        printf("Método do while vai ser executado.\n");
        
        i++;
    }while(i < numero);
}
