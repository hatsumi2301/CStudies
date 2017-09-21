//
//  main.c
//  CStudies
//
//  Created by Hatsumi Hashi on 05/09/17.
//  Copyright © 2017 Hatsumi Hashi. All rights reserved.
//

#include <stdio.h>

void Saida(); //Exemplo de como imprimir um valor
int Entrada(); //Exemplo de como obter um valor de entrada pelo teclado

void Condicionais(); //Exemplo de condicionais

void LoopFor(); //Exemplo de loop for
void LoopWhile(); //Exemplo de loop while
void LoopDoWhile(); //Exemplo de loop do while
void DiferencaEntreLoopWhileAndDoWhile(); //Exemplifica a diferente entre o loop do tipo while e o do do while

void TiposDeVariaveis(); //Imprime um exemplo dos tipos de variáveis
void ModificadoresDeVariaveis(); //Imprime a lista dos tipos e modificadores de variáveis
void VariavelDoTipoConst(const char *palavra); //Imprime '-' no lugar dos espaços no texto passado como parâmetro
void VariavelDoTipoVolatile(); //Imprime um texto explicando o que é uma variável do tipo volatile
void EspecificadorExtern();

void ObterNome();

void VerificarCaractereNaString(); //Não está funcionando
int VerificarCaractereNaString2(char *s, char c); //Verifica se a string contém um determinado caractere

int main()
{
    VariavelDoTipoVolatile();
}

void Saida(){
    printf( "Olá mundo!\n" );
    getchar();
}

int Entrada(){
    int numero;
    
    printf( "Insira um número: " );
    scanf( "%d", &numero );
    printf( "Você inseriu o número %d.\n", numero );
    getchar();
    
    return numero;
}

void ObterNome(){
    int t;
    
    printf("Digite 1.\n");
    scanf("%d", &t);
    
    if(t == 1){
        char s[80];
        
        printf("Entre com o nome: ");
        scanf("%s", &s[80]);
        printf("Nome digitado: %s.\n", &s[80]);
    }
}

void VerificarCaractereNaString(){
    char palavra;
    char caractere;
    char *texto = "A palavra não contém a letra.\n";
    
    printf("Informe uma palavra: ");
    scanf("%s", &palavra);
    
    printf("\nInforme uma letra: ");
    scanf(" %c", &caractere);
    
    while(palavra)
    {
        if(palavra == caractere){
            texto = "\nA palavra contém a letra.\n";
        }
        else{
            palavra++;
        }
    }
    
    printf("%s", texto);
}

int VerificarCaractereNaString2(char *s, char c)
{
    while(*s)
        if(*s == c) return 1;
        else s++;
    
    return 0;
}

void EspecificadorExtern(){
    printf("Ocorreria um erro se fossem declaradas duas variáveis globais com o mesmo nome em arquivos diferentes de um mesmo projeto.\nA solução seria declarar todas as variáveis globais em um arquivo e usar declarações externo nos outros");
}
