//
//  OperadoresDeIteracao.c
//  CStudies
//
//  Created by Hatsumi Hashi on 05/10/17.
//  Copyright © 2017 Hatsumi Hashi. All rights reserved.
//

#include "OperadoresDeIteracao.h"

void ForIncremento(){
    int x;
    
    //Começando no número um
    //Enquanto o número for menor ou igual a 100
    //Soma 1 unidade a cada rodada do laço
    for(x = 1; x <= 100; x++) printf("%d ", x); //Imprime o valor de x
}

void ForDecremento(){
    int x;
    double z;
    
    //Começando no número 100
    //Enquanto o número for diferente de 65
    //Diminui 5 unidades a cada rodada do laço
    for(x = 100; x != 65; x -= 5){
        z = x * x;
        printf("O quadrado de %d é %f ", x, z); //Imprime o valor de x e z
    }
}

void ForNaoSeraExecutado(){
    int x;
    int y;
    
    x = 10;
    
    //Começando com o número 10
    //Se y for diferente de x
    //Soma 1 unidade a cada rodada do laço
    for(y = 10; y != x; ++y) printf("%d ", x); //Imprime o valor de x
    
    printf("Somente este comando será executado. Valor de y = %d e valor de x = %d", y, x);
}

void ForComDoisControles(){
    int x;
    int y;
    
    //Começando com o número 0 em x e y
    //Se a soma de x e y for menor ou igual a 10
    //Soma 1 unidade em x a cada rodada do laço
    for(x = 0, y = 0; x + y <= 10; ++x, y++)
        printf("Valor de y = %d e valor de x = %d\n", y, x);
}

void ForCondicao(){
    char str[20];
    int x;
    
    //Se a senha digitada for igual a "senha" e se o usuário errou a senha menos de 3 vezes
    for(x = 0; x < 3 && strcmp(str, "senha"); ++x){
        printf("Digite a senha: ");
        gets(str);
    }
    
    if(x == 3) return;
    else printf("\nSenha correta.");
}

void ForComFuncoes(){
    int numero;
    
    //For utiliza chamadas de funções para as suas rodadas
    //Executa o primeiro ImprimirTexto() apenas uma vez, 
    // nas próximas vezes executa apenas o segundo (i++)
    for(ImprimirTexto(); (numero = LerNumero()); ImprimirTexto()){
        QuadradoDeUmNumero(numero);
    }
}

int QuadradoDeUmNumero(int numero){
    printf("%d\n", numero*numero);
    return numero*numero;
}

int LerNumero(){
    int numero;
    scanf("%d", &numero);
    return numero;
}

int ImprimirTexto(){
    printf("Digite um número: ");
    return 0;
}

void ForSemParteDaDefinicao(){
    int x;
    
    //Para que o for funcione, não é necessário ter todas as expressões na definição
    for(x = 0; x != 123; ){
        printf("Digite um número: ");
        scanf("%d", &x);
    }
}

void ForInfinito(){
    for(;;){
        printf("Laço infinito ");
    }
}

void ForDigiteA(){
    //Definindo caractere vazio
    char ch = '\0';
    
    for(;;){
        printf("Digite A\n");
        ch = getchar();
        if(ch == 'A') break; //Se o caractere digitado for igual a A, sai do laço
    }
    
    printf("Você digitou um A.\n");
}

void ForSemCorpo(){
    int x;
    
    printf("Começou o for\n");
    
    //For de atraso de tempo
    for(x = 0; x < 1000000000; x++);
    
    printf("Terminou o for\n");
}

void ComandoWhile(){
    char ch = '\0';
    
    //Enquanto o caractere digitado for diferente de A, o código será executado
    while(ch != 'A'){
        printf("Digite A\n");
        ch = getchar();
    }
}

void ComandoWhileCondicaoVerdadeira(){
    int x = 10;
    
    printf("Antes do while\n");
    
    //Caso a condição do while já seja verdadeira, o bloco de código não será executado
    while(x != 10) printf("Essa linha não será executada\n");
    
    printf("Depois do while\n");
}

void ComandoWhileSemCorpo(){
    char ch = '\0';
    
    printf("Digite A\n");
    
    //Será executado até que o usuário digite A
    while((ch = getchar()) != 'A');
    
    printf("Fim do while\n");
}

void ComandoDoWhile(){
    char ch;
    
    printf("Escolha uma opção de menu:\n");
    printf("Opção 1\n");
    printf("Opção 2\n");
    printf("Opção 3\n");
    
    do{
        ch = getchar();
        
        switch(ch){
            case 1:
                printf("Você escolheu a opção 1\n");
                break;
            case 2:
                printf("Você escolheu a opção 2\n");
                break;
            case 3:
                printf("Você escolheu a opção 3\n");
                break;
        }
    }while(ch != '1' && ch != '2' && ch != '3');
}
