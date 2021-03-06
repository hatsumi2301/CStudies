//
//  OperadoresDeSelecao.c
//  CStudies
//
//  Created by Hatsumi Hashi on 05/10/17.
//  Copyright © 2017 Hatsumi Hashi. All rights reserved.
//

#include "OperadoresDeSelecao.h"

void AdivinharONumero()
{
    int magico;
    int chute;
    
    //Atribui à variável magico, um valor randômico
    magico = rand();
    
    printf("Adivinhe o número mágico: ");
    scanf("%d", &chute);
    
    if(chute == magico) printf("Você acertou!!");
    else {
        printf("Você errou!\n");
    }
}

void AdivinharONumeroComIfElseIf(){
    int magico;
    int chute;
    
    //Atribui à variável magico, um valor randômico
    magico = rand();
    
    printf("Adivinhe o número mágico: ");
    scanf("%d", &chute);
    
    if(chute == magico) printf("Você acertou!!");
    else if(chute > magico){
        printf("Muito alto.\n");
    }
    else{
        printf("Muito baixo.\n\n");
    }
}

void AdivinharONumeroComOperadorTernario(){
    int magico;
    int chute;
    
    //Atribui à variável magico, um valor randômico
    magico = rand();
    
    printf("Adivinhe o número mágico: ");
    scanf("%d", &chute);
    
    if(chute == magico) printf("Você acertou!!");
    else chute > magico ? printf("Muito alto.\n") : printf("Muito baixo.\n\n");
}

void CalcularQuadradoDeUmNumeroComOperadorTernario(){
    int quadrado;
    int i;
    
    printf("Digite um número: ");
    scanf("%d", &i);
    
    quadrado = i >= 0 ? i * i : - (i * i);
    
    printf("%d ao quadrado é %d", i, quadrado);
}

void OperadorTernarioComFuncoes(){
    int t;
    
    printf("Digite um número: ");
    scanf("%d", &t);
    
    //Imprime a mensagem apropriada
    t ? funcao1(t) + funcao2() : printf("O número digitado foi zero.\n");
}

int funcao1(int numero){
    printf("%d ", numero);
    return 0;
}

int funcao2(){
    printf("foi o número digitado.\n");
    return 0;
}

void AdivinharONumeroComIfAninhado(){
    int magico;
    int chute;
    
    //Atribui à variável magico, um valor randômico
    magico = rand();
    
    printf("Adivinhe o número mágico: ");
    scanf("%d", &chute);
    
    if(chute == magico) printf("Você acertou!!");
    else {
        printf("Você errou!\n");
        
        if(chute > magico) printf("Muito alto.\n");
        else printf("Muito baixo.\n\n");
    }
}

void VerificaSeONumeroEhZero(){
    int a;
    int b;
    
    printf("Digite dois números: ");
    scanf("%d%d", &a, &b);
    
    //Se b for diferente de 0, então é realizada a divisão
    if(b) printf("%d\n", a/b); 
    else printf("Não é possível dividir um número por zero.\n");
}

void ComandoSwitchMenu(){
    char ch;
    
    printf("Escolha uma opção:\n");
    printf("1. Verão\n");
    printf("2. Outono\n");
    printf("3. Inverno\n");
    printf("4. Primavera\n");
    
    scanf(" %c", &ch);
    
    switch (ch) {
        case '1':
            printf("Começa em 1 de dezembro e termina em 28 de fevereiro\n");
            break; //Para a execução do switch e vai para a próxima linha após o switch
        case '2':
            printf("Começa em 1 de março e termina em 31 de maio\n");
            break;
        case '3':
            printf("Começa em 1 de junho e termina em 31 de agosto\n");
            break;
        case '4':
            printf("Começa em 1 de setembro e termina em 30 de novembro\n");
            break;
        default:
            printf("Opção inexistente\n");
            break;
    }
}

void ComandoSwitchSemBreak(){
    char ch;
    
    printf("Escolha uma opção:\n");
    printf("1. Um\n");
    printf("2. Dois\n");
    printf("3. Três\n");
    printf("4. Quatro\n");
    
    scanf(" %c", &ch);
    
    switch (ch) {
        case '1':
            printf("Se a opção 1 for escolhida\nEntão essa opção será executada\n\n");
        case '2':
            printf("Se a opção 1");
            printf(" ou a opção 2 for escolhida\n");
            printf("Então essa opção será executada\n\n");
        case '3':
            printf("Se a opção 1");
            printf(" ou a opção 2");
            printf(" ou a opção 3 for escolhida\n");
            printf("Então essa opção será executada\n\n");
        case '4':
            printf("Se a opção 1");
            printf(" ou a opção 2");
            printf(" ou a opção 3");
            printf(" ou a opção 4 for escolhida");
            printf("\nEntão essa opção será executada\n\n");
        default:
            printf("Sempre vai ser executado\n");
    }
}

void ComandoSwitchDeclarandoVariaveis(){
    char ch;
    
    printf("Escolha uma opção:\n");
    printf("1. Inteiro\n");
    printf("2. Caractere\n");
    
    scanf(" %c", &ch);
    
    int i;
    char k;
    
    switch (ch) {
        //Dá para declarar as variáveis aqui
        //int i;
        //char k;
        case '1':
            printf("Digite um valor inteiro: ");
            scanf(" %d", &i);
            printf("\nO valor digitado foi %d\n", i);
            break;
        case '2':
            printf("Digite um caractere: ");
            scanf(" %c", &k);
            printf("\nO caractere digitado foi %c\n", k);
            break;
        default:
            printf("Opção inexistente\n");
            break;
    }
}

void ComandoSwitchComBlocosDeCodigo(){
    char ch;
    
    printf("Escolha uma opção:\n");
    printf("1. Inteiro\n");
    printf("2. Caractere\n");
    
    scanf(" %c", &ch);
    
    switch (ch) {
        case '1':
            {
                int i;
                printf("Digite um valor inteiro: ");
                scanf(" %d", &i);
                printf("\nO valor digitado foi %d\n", i);
            }
            break;
        case '2':
            {
                char k;
                printf("Digite um caractere: ");
                scanf(" %c", &k);
                printf("\nO caractere digitado foi %c\n", k);
            }
            break;
        default:
            printf("Opção inexistente\n");
            break;
    }
}

void SwitchAninhado(){
    char ch;
    char ch2;
    int i;
    
    printf("Escolha uma opção:\n");
    printf("1. Soma e subtração\n");
    printf("2. Divisão e multiplicação\n");
    
    scanf(" %c", &ch);
    
    switch (ch) {

        case '1':
            printf("Escolha uma opção:\n");
            printf("1. Soma\n");
            printf("2. Subtração\n");
            scanf(" %c", &ch2);
            switch(ch2){
                case 1:
                    i = 1 + 1;
                    printf("1 + 1 = %d\n", i);
                    break;
                case 2:
                    i = 1 - 1;
                    printf("1 - 1 = %d\n", i);
                    break;
            }    
        break;

        case '2':
            printf("Escolha uma opção:\n");
            printf("1. Divisão\n");
            printf("2. Multiplicação\n");
            scanf(" %c", &ch2);
            switch(ch2){
                case 1:
                    i = 4 / 2;
                    printf("4 / 2 = %d\n", i);
                    break;
                case 2:
                    i = 2 * 3;
                    printf("2 * 3 = %d\n", i);
                    break;
            }
        break;

        default:
            printf("Opção inexistente\n");
        break;
    }
}
