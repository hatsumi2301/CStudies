//
//  Operadores.c
//  CStudies
//
//  Created by Hatsumi Hashi on 27/09/17.
//  Copyright © 2017 Hatsumi Hashi. All rights reserved.
//

#include "Operadores.h"

void ConversaoTiposDeValores(){
    int x = 300;
    char ch;
    float f = 44.55;
    
    //Converte int para char
    ch = x;
    printf("x = 300\nch = x\nch = %c\n\n", ch);
    
    //Converte float para int
    x = f;
    printf("f = 44.55\nx = f\nx = %d\n\n", x);
    
    //Converte char para float
    ch = 'a';
    f = ch;
    printf("ch = 'a'\nf = ch\nf = %f\n\n", f);
    
    //Converte int para float
    f = x;
    printf("x = 44\nf = x\nf = %f\n\n", f);
}

void AtribuicoesMultiplas(){
    int x;
    int y;
    int k;
    
    //Atribui o valor 10 para as variáveis x, y e k
    x = y = k = 10;
    
    printf("x = y = k = 10\n");
    printf("x: %d.\n", x);
    printf("y: %d.\n", y);
    printf("z: %d.\n", k);
}

void Subtracao(){
    int x = 2;
    int y = 1;
    int k;
    
    k = x - y;
    
    printf("x = 2\ny = 1\nk = x - y\nk = %d", k);
}

void Adicao(){
    int x = 2;
    int y = 1;
    int k;
    
    k = x + y;
    
    printf("x = 2\ny = 1\nk = x + y\nk = %d", k);
}

void Multiplicacao(){
    int x = 2;
    int y = 1;
    int k;
    
    k = x * y;
    
    printf("x = 2\ny = 1\nk = x * y\nk = %d", k);
}

void Divisao(){
    int x = 4;
    int y = 2;
    int k;
    
    k = x / y;
    
    printf("x = 4\ny = 2\nk = x - y\nk = %d", k);
}

void Modulo(){
    int x, y;
    
    //Resto da divisão de 5 por 2
    x = 5;
    y = 2;
    
    printf("%d/%d = %d\n", x, y, x/y);
    printf("%d%%%d = %d\n", x, y, x%y);
    
    //Resto da divisão de 1 por 2 não funciona corretamente, pois não é um número inteiro
    x = 1;
    y = 2;
    
    printf("%d/%d = %d \n%d%%%d = %d errado\n", x, y, x/y, x, y, x%y);
}

void Incremento(){
    int x;
    int y;
    
    //Atribui o valor 10 para a variável x
    x = 10;
    printf("x = %d\n", x);
    //Soma 1 unidade à variável x
    //Atribui o valor 11 à variável y
    y = ++x;
    printf("y = ++x = %d\n", y);
    printf("x = %d\n\n", x);
    
    //Atribui o valor 10 para a variável x
    x = 10;
    printf("x = %d\n", x);
    //Atribui o valor 10 para a variável y
    //Soma 1 unidade à variável x
    y = x++;
    printf("y = x++ = %d\n", y);
    printf("x = %d\n", x);
}

void Decremento(){
    int x;
    int y;
    
    //Atribui o valor 10 à variável x
    x = 10;
    printf("x = %d\n", x);
    //Subtrai 1 unidade da variável x
    //Atribui o valor 9 à variável y
    y = --x;
    printf("y = --x = %d\n", y);
    printf("x = %d\n\n", x);
    
    //Atribui o valor 10 à variável x
    x = 10;
    printf("x = %d\n", x);
    //Atribui o valor 10 à variável y
    //Subtrai 1 unidade da variável x
    y = x--;
    printf("y = x-- = %d\n", y);
    printf("x = %d\n", x);
}
