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

int xor(int a, int b);

int Opcoes(void);
void Saida(void);
void EntradaNumero(void);
void EntradaTexto(void);
void TiposDeVariaveis(void);
void NomeDaVariavel(void);
void NomeDaVariavelRepetido(void);
void NomeDaVariavelRepetidoEmOutraClasse(void);
void VerificarCaractereNaString(void);
int VerificarCaractereNaString2(char *s, char c);
void LoopFor(void);
void LoopWhile(void);
void LoopDoWhile(void);
void DiferencaEntreLoopWhileAndDoWhile(void);
void Condicionais(void);
void FuncaoQueUtilizaAsVariaveisGlobais(void);
void FuncaoQueUtilizaAsVariaveisGlobais2(void);
void FuncaoQueUtilizaAsVariaveisGlobais3(void);
void VariavelDoTipoConst(const char *frase);
void VariavelDoTipoVolatile(void);
void IniciarSerie(int semente);
int Serie(void);
int VariavelEstatica(void);
int EspecificadorRegister(register int m, register int e);
void ConversaoTiposDeValores(void);
void AtribuicoesMultiplas(void);
void Subtracao(void);
void Adicao(void);
void Multiplicacao(void);
void Divisao(void);
void Modulo(void);
void Incremento(void);
void Decremento(void);

int main(){
    while (1==1) {
        int opcao = Opcoes();
        int opcao2;
        int existe;
        int valorDeRetorno;
    
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
                printf("1. Tipos de variáveis\n2. Variáveis podem ter o mesmo nome, se estiverem em contextos diferentes");
                scanf("%d", &opcao2);
                printf("\n");
                
                if(opcao2 == 1) TiposDeVariaveis();
                else if(opcao2 == 2){
                    NomeDaVariavel();
                    NomeDaVariavelRepetido();
                    NomeDaVariavelRepetidoEmOutraClasse();
                }
                
                break;
            case 4:
                printf("\nInforme uma opção: \n");
                printf("1. Verificar se o caractere existe na palavra informando a palavra e o caractere \n2. Verificar que o caractere 'x' não existe na palavra 'fécula'\n3. Verificar que o caractere 'a' existe na palavra 'ave'\n4. Loop for\n5. Loop while\n6. Loop do while\n7. Diferença entre o loop while e do while\n\n");
                scanf("%d", &opcao2);
                printf("\n");
                
                if(opcao2 == 1) VerificarCaractereNaString();
                else if(opcao2 == 2){
                    existe = VerificarCaractereNaString2("fécula", 'x');
                    if(existe == 0) printf("A palavra não contém a letra.\n");
                    else printf("A palavra contém a letra.\n");
                }
                else if(opcao2 == 3){
                    existe = VerificarCaractereNaString2("ave", 'x');
                    if(existe == 0) printf("A palavra não contém a letra.\n");
                    else printf("A palavra contém a letra.\n");
                }
                else if(opcao2 == 4) LoopFor();
                else if(opcao2 == 5) LoopWhile();
                else if(opcao2 == 6) LoopDoWhile();
                else if(opcao2 == 7) DiferencaEntreLoopWhileAndDoWhile();
                else printf("Opção inexistente.");
                break;
            case 5:
                Condicionais();
                break;
            case 6:
                FuncaoQueUtilizaAsVariaveisGlobais();
                FuncaoQueUtilizaAsVariaveisGlobais2();
                FuncaoQueUtilizaAsVariaveisGlobais3();
                break;
            case 7:
                printf("Variável do tipo const.\n");
                VariavelDoTipoConst("Isso é um teste");
                printf("\n\nVariável do tipo volatile.\n");
                VariavelDoTipoVolatile();
                break;
            case 8:
                printf("\nInforme uma opção: \n");
                printf("1. Variável estática\n2. Variável estática global\n\n");
                scanf("%d", &opcao2);
                printf("\n");
                
                if(opcao2 == 1){
                    printf("A variável estática vai ser inicializada somente uma vez, na primeira chamada do método. Ela será inicializada com o valor 10, será somado 1 ao seu valor e será retornado o valor 11.\nNas próximas chamadas do método, o valor da variável será o resultado do valor da soma da execução anterior.\n");
                    for(int i = 0; i < 10; i++){
                        valorDeRetorno = VariavelEstatica();
                        printf("%d\n", valorDeRetorno);
                    }
                }
                else if(opcao2 == 2){
                    printf("Informe um valor inteiro: ");
                    scanf("%d", &valorDeRetorno);
                    
                    IniciarSerie(valorDeRetorno);
                    valorDeRetorno = Serie();
                    
                    printf("Valor informado + 23 = %d.\n", valorDeRetorno);
                }
                else printf("Opção inexistente.");
                break;
            case 9:
                valorDeRetorno = EspecificadorRegister(10, 10);
                
                printf("%d\n", valorDeRetorno);
                break;
            case 10:
                ConversaoTiposDeValores();
                break;
            case 11:
                AtribuicoesMultiplas();
                break;
            case 12:
                printf("\nInforme uma opção: \n");
                printf("1. Subtração\n2. Adição\n3. Multiplicação\n4. Divisão\n5. Módulo\n6. Incremento\n7. Decremento\n\n");
                scanf("%d", &opcao2);
                printf("\n");
                
                if(opcao2 == 1) Subtracao();
                else if(opcao2 == 2) Adicao();
                else if(opcao2 == 3) Multiplicacao();
                else if(opcao2 == 4) Divisao();
                else if(opcao2 == 5) Modulo();
                else if(opcao2 == 6) Incremento();
                else if(opcao2 == 7) Decremento();
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
    printf("1. Printf\n2. Scanf\n3. Variáveis\n4. Loops\n5. Condicionais\n6. Variáveis globais\n7. Modificadores de tipo de acesso\n8. Variável estática\n9. Especificador register\n10. Conversão de tipos de valores\n11. Atribuições múltiplas\n12. Operadores aritméticos\n");
    
    int opcao;
    
    scanf(" %d", &opcao);
    printf("\n");
    
    return opcao;
}


void PrintXor(){
    printf("%d, %d, %d\n", 1, 0, xor(1, 0));
    printf("%d, %d, %d\n", 1, 1, xor(1, 1));
    printf("%d, %d, %d\n", 0, 1, xor(0, 1));
    printf("%d, %d, %d\n", 0, 0, xor(0, 0));
}

int xor(int a, int b){
    return (a || b) && !(a && b);
}

void OperadoresBitBit(){
    printf("Operador    Ação\n");
    printf("&           AND \n");
    printf("|           OR\n");
    printf("ˆ           OR exclusivo (XOR)\n");
    printf("~           Complemento de um\n");
    printf(">>          Deslocamento à esquerda\n");
    printf("<<          Deslocamento à direitw\n");
}
