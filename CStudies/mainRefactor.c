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
void PrintXor(void);
void MaiorQue(void);
void MaiorQueOuIgual(void);
void MenorQue(void);
void MenorQueOuIgual(void);
void Igual(void);
void Diferente(void);
void And(void);
void Or(void);
void Xor(void);
void ComplementoDeUm(void);
void Deslocamentos(void);
char Codificar(char);
void OperadorTernario(void);
void ExemploComIfElseOperadorTernario(void);
void OperadoresPonteiros(void);

int main(){
    while (1==1) {
        int opcao = Opcoes();
        int opcao2;
        int existe;
        int valorDeRetorno;
        
        switch (opcao) {
            case 1:
                printf("\nInforme uma opção: \n");
                printf("1. Printf\n2. Scanf\n\n");
                scanf("%d", &opcao2);
                printf("\n");
                
                if(opcao2 == 1) Saida();
                else if(opcao2 == 2) {
                    printf("\nInforme uma opção: \n");
                    printf("1. Número\n2. Texto\n\n");
                    scanf("%d", &opcao2);
                    printf("\n");
                    
                    if(opcao2 == 1) EntradaNumero();
                    else if(opcao2 == 2) EntradaTexto();
                    else printf("Opção inexistente.");
                }
                else printf("Opção inexistente.");
                break;
            case 2:
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
            case 3:
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
            case 4:
                Condicionais();
                break;
            case 5:
                FuncaoQueUtilizaAsVariaveisGlobais();
                FuncaoQueUtilizaAsVariaveisGlobais2();
                FuncaoQueUtilizaAsVariaveisGlobais3();
                break;
            case 6:
                printf("Variável do tipo const.\n");
                VariavelDoTipoConst("Isso é um teste");
                printf("\n\nVariável do tipo volatile.\n");
                VariavelDoTipoVolatile();
                break;
            case 7:
                printf("\nInforme uma opção: \n");
                printf("1. Variável estática\n2. Variável estática global\n3. Especificador register\n\n");
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
                else if(opcao2 == 3){
                    valorDeRetorno = EspecificadorRegister(10, 10);
                    
                    printf("%d\n", valorDeRetorno);
                }
                else printf("Opção inexistente.");
                break;
            case 8:
                printf("Conversão de tipos de valores\n\n");
                ConversaoTiposDeValores();
                
                printf("Atribuições múltiplas\n\n");
                AtribuicoesMultiplas();
                
                printf("\n\nInforme uma opção: \n");
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
            case 9:
                MaiorQue();
                MaiorQueOuIgual();
                MenorQue();
                MenorQueOuIgual();
                Igual();
                Diferente();
                PrintXor();
                break;
            case 10:
                And();
                Or();
                Xor();
                ComplementoDeUm();
                Deslocamentos();
                
                char aCodificado = Codificar('a');
                printf("Caractere \'a\' codificado: %c\n", aCodificado);
                break;
            case 11:
                OperadorTernario();
                ExemploComIfElseOperadorTernario();
                break;
            case 12:
                OperadoresPonteiros();
            default:
                printf("Opção inexistente.");
                break;
        }
    }
}

int Opcoes(){
    printf("\n______________________________________\nInforme uma opção: \n");
    printf("1. Capítulo 1\n2. Capítulo 2\n3. Capítulo 3\n4. Capítulo 4\n5. Capítulo 5.\n6. Capítulo 6.\n7. Capítulo 7.\n8. Capítulo 8.\n9. Capítulo 9.\n10. Capítulo 10.\n11. Capítulo 11.\n12. Capítulo 12.\n");
    
    int opcao;
    
    scanf(" %d", &opcao);
    printf("\n");
    
    return opcao;
}
