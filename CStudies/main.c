//
//  main.c
//  CStudies
//
//  Created by Hatsumi Hashi on 05/09/17.
//  Copyright © 2017 Hatsumi Hashi. All rights reserved.
//

#include <stdio.h>

void Saida();
int   Entrada();


void Condicionais();
void LoopFor();


void LoopWhile();
void LoopDoWhile();
void DiferencaEntreLoopWhileAndDoWhile();
void TiposDeVariaveis();
void ModificadoresDeVariaveis();
void ObterNome();
void VerificarCaractereNaString();
int VerificarCaractereNaString2(char *s, char c);

int main()
{
    int i = VerificarCaractereNaString2("teste", 'e');
    
    printf("%d", &i);
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

void Condicionais(){
    int numero = Entrada();

    if ( numero == 1 ) {
        printf("Executa esse comando se a condição do primeiro if for verdadeira.\n");
        printf("A condição do if vai ser verdadeira se o número for igual a 1.\n");
    }
    else if(numero == 2){
        printf("Executa esse comando se a condição do primeiro if for falsa e a condição do segundo if for verdadeira.\n");
        printf("A condição do if vai ser verdadeira se o número for igual a 2.\n");
    }
    else {
        printf("Executa esse comando se a condição dos ifs forem falsas.\n");
    }
}

void LoopFor(){
    printf("Esse método chama o método 'Condicionais' três vezes.\n\n");
    
    for (int i = 0; i < 3; i++){
        printf("\nMétodo 'Condicionais' foi chamado %d vezes.\n\n", i + 1);
        
        Condicionais();
    }
}

void LoopWhile()
{
    int i = 0;
    
    printf("Esse método chama o método 'Entrada' três vezes.\n\n");
    
    while(i < 3){
        printf("\nMétodo 'Entrada' foi chamado %d vezes.\n\n", i + 1);
        
        Entrada();
        
        i++;
    }
}

void LoopDoWhile()
{
    int i = 0;
    
    printf("Esse método chama o método 'Entrada' três vezes.\n\n");
    
    do{
        printf("\nMétodo 'Entrada' foi chamado %d vezes.\n\n", i + 1);
        
        Entrada();
        
        i++;
    }while(i < 3);
}

void DiferencaEntreLoopWhileAndDoWhile(){
    int numero = 0;
    
    int i = 0;
    while(i < numero){
        printf("Método while não vai ser executado.\n");
        
        i++;
    }
    
    do{
        printf("Método do while vai ser executado.\n");
        
        i++;
    }while(i < numero);
}

void TiposDeVariaveis(){
    char caractere = 'a';
    int inteiro = 1;
    float pontoFlutuante = 1.1;
    double pontoFlutuanteDuplaPrecisao = 1.2;
    
    printf("Caractere é um char: %c.\n", caractere);
    printf("Inteiro é um int: %d.\n", inteiro);
    printf("Ponto flutuante é um float: %f.\n", pontoFlutuante);
    printf("Ponto flutuante de dupla precisão é um double: %f.\n", pontoFlutuanteDuplaPrecisao);
}

void ModificadoresDeVariaveis(){
    printf("Tipo                bits    Faixa mínima\n");
    printf("char                8       -127 a 127\n");
    printf("unsigned char       8       0 a 255\n");
    printf("signed char         8       -127 a 127\n");
    printf("int                 16      -32.767 a 32.767\n");
    printf("unsigned int        16      0 a 65.535\n");
    printf("signed int          16      0 a 65.535\n");
    printf("short int           16      0 a 65.535\n");
    printf("unsigned short int  16      0 a 65.535\n");
    printf("signed short int    16      0 a 65.535\n");
    printf("long int            32      -2.147.483.647 a 2.147.483.637\n");
    printf("signed long int     32      -2.147.483.647 a 2.147.483.637\n");
    printf("unsigned long int   32      0 a 4.294.967.295\n");
    printf("float               32      seis dígitos de precisão\n");
    printf("double              64      dez dígitos de precisão\n");
    printf("long dougle         80      dez dígitos de precisão\n");
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
