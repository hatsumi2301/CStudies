//
//  main.c
//  CStudies
//
//  Created by Hatsumi Hashi on 05/09/17.
//  Copyright © 2017 Hatsumi Hashi. All rights reserved.
//

#include <stdio.h>

int x, y; //Variáveis globais
void FuncaoQueUtilizaAsVariaveisGlobais(void);
void FuncaoQueUtilizaAsVariaveisGlobais2(void);
void FuncaoQueUtilizaAsVariaveisGlobais3(void);

void Saida(void); //Exemplo de como imprimir um valor
int Entrada(void); //Exemplo de como obter um valor de entrada pelo teclado

void Condicionais(void); //Exemplo de condicionais

void LoopFor(void); //Exemplo de loop for
void LoopWhile(void); //Exemplo de loop while
void LoopDoWhile(void); //Exemplo de loop do while
void DiferencaEntreLoopWhileAndDoWhile(void); //Exemplifica a diferente entre o loop do tipo while e o do do while

void TiposDeVariaveis(void); //Imprime um exemplo dos tipos de variáveis
void ModificadoresDeVariaveis(void); //Imprime a lista dos tipos e modificadores de variáveis
void VariavelDoTipoConst(const char *palavra); //Imprime '-' no lugar dos espaços no texto passado como parâmetro
void VariavelDoTipoVolatile(void); //Imprime um texto explicando o que é uma variável do tipo volatile
void EspecificadorExtern(void); //Imprime um texto explicando o que é extern
void EspecificadorStatic(void); //Imprime um texto explicando o que é o especificador static
void VariavelEstaticaGlobal(void); //Imprime um texto explicando sobre o contexto da variável estática global
void IniciarSerie(int semente); //Inicializa a variável estática global da classe VariavelEstatica
int Serie(void); //Soma um valor à variável estática global
int EspecificadorRegister(register int m, register int e); //Imprime um texto explicando

void AtribuicoesMultiplas(void); //Exemplo de múltiplas atribuições

void ObterNome(void);

void VerificarCaractereNaString(void); //Não está funcionando
int VerificarCaractereNaString2(char *s, char c); //Verifica se a string contém um determinado caractere

void Constantes(void); //Imprime uma tabela com as constantes \

void Modulo(void); //Exemplo de modulo

void IncrementoDecremento(void); //Exemplo de incrementos e decrementos
void PrintXor(void); //Exemplo de xor
void OperadoresBitBit(void); //Imprime tabela de operadores bit a bit

int main(){
    OperadoresBitBit();
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

int VerificarCaractereNaString2(char *s, char c){
    while(*s)
        if(*s == c) return 1;
        else s++;
    
    return 0;
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
