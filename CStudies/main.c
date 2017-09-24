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
#include "Loops.h"

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
                TiposDeVariaveis();
                break;
            case 4:
                printf("\nInforme uma opção: \n");
                printf("1. Verificar se o caractere existe na palavra informando a palavra e o caractere \n2. Verificar que o caractere 'x' não existe na palavra 'fécula'\n3. Verificar que o caractere 'a' existe na palavra 'ave'\n\n");
                scanf("%d", &opcao2);
                printf("\n");
                
                if(opcao2 == 1) VerificarCaractereNaString();
                else if(opcao2 == 2){
                    existe = VerificarCaractereNaString2("fécula", "x");
                    if(existe == 0) printf("A palavra não contém a letra.\n");
                    else printf("A palavra contém a letra.\n");
                }
                else if(opcao2 == 3){
                    existe = VerificarCaractereNaString2("x", "ave");
                    if(existe == 0) printf("A palavra não contém a letra.\n");
                    else printf("A palavra contém a letra.\n");
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
    printf("1. Printf\n2. Scanf\n3. Variáveis\n4. Loops\n\n");
    
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


void VariavelDoTipoConst(const char *palavra){
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

int EspecificadorRegister(register int m, register int e){
    printf("O acesso ao objeto é o mais rápido possível. Os objetos são colocados nos registradores da CPU.\n");
    printf("São usadas onde são feitas muitas referências a uma mesma variável.\n");
    
    register int temp;
    
    temp = 1;
    
    for(; e; e--) temp = temp * m;
    
    return temp;
}

void AtribuicoesMultiplas(){
    int x;
    int y;
    int k;
    
    x = y = k = 10;
    
    printf("x: %d.\n", x);
    printf("y: %d.\n", y);
    printf("z: %d.\n", k);
}
