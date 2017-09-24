//
//  main.c
//  CStudies
//
//  Created by Hatsumi Hashi on 05/09/17.
//  Copyright © 2017 Hatsumi Hashi. All rights reserved.
//

#include <stdio.h>
#include "Saida.h"
#include "Entrada.h"
#include "Loop.h"

int x, y; //Variáveis globais

int main(){
    while (1==1) {
        int opcao = Opcoes();
        int opcao2;
        int existe;
    
        switch (opcao) {
            case 1:
                Saida();
                break;
            case 2:
                printf("\nInforme uma opção: \n");
                printf("1. Número\n2. Texto\n\n");
                scanf("%d", &opcao2);
                printf("\n");
                
                if(opcao2 == 1) EntradaNumero();
                else if(opcao2 == 2) EntradaTexto();
                else printf("Opção inexistente.");
                
                break;
            case 3:
                printf("\nInforme uma opção: \n");
                printf("1. Verificar se o caractere existe na palavra informando a palavra e o caractere \n2. Verificar que o caractere 'x' não existe na palavra 'fécula'\n3. Verificar que o caractere 'a' existe na palavra 'ave'\n\n");
                scanf("%d", &opcao2);
                printf("\n");
                
                if(opcao2 == 1) VerificarCaractereNaString();
                else if(opcao2 == 2){
                    existe = VerificarCaractereNaString2("fécula", "x");
                }
                else if(opcao2 == 3){
                    existe = VerificarCaractereNaString2("x", "ave");
                }
                else printf("Opção inexistente.");
                break;
            default:
                printf("Opção inexistente.");
                break;
        }
    }
}

int Opcoes(){
    printf("\n______________________________________\nInforme uma opção: \n");
    printf("1. Printf\n2. Scanf\n3. Loop\n\n");
    
    int opcao;
    
    scanf("%d", &opcao);
    printf("\n");
    
    return opcao;
}

void FuncaoQueUtilizaAsVariaveisGlobais(){
    x = 123;
}

void Constantes(){
    printf("Código  Significado\n");
    printf("\\n     Retrocesso (BS)\n");
    printf("\\f     Alimentação de formulário (FF)\n");
    printf("\\n     Nova linha (LF)\n");
    printf("\\r     Retorno de carro (CR)\n");
    printf("\\t     Tabulação horizontal (HT)\n");
    printf("\\\"     Aspas duplas\n");
    printf("\\\'     Aspas simples\n");
    printf("\\0     Nulo\n");
    printf("\\\\     Barra invertida\n");
    printf("\\v     Tabulação vertical\n");
    printf("\\a     Alerta (beep)\n");
    printf("\\N     Constante octal (onde N é uma constante octal)\n");
    printf("\\xN    Constante hexadecimal (onde N é uma constante hexadecimal)\n");
}
