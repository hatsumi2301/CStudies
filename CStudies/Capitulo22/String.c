//
//  String.c
//  CStudies
//
//  Created by Hatsumi Hashi on 09/10/17.
//  Copyright © 2017 Hatsumi Hashi. All rights reserved.
//

#include "String.h"
#include <string.h>

void String(){
    char s1[80];
    char s2[80];
    
    scanf(" %s", s1);
    scanf(" %s", s2);
    
    //Retorna o tamanho de s1 e s2
    printf("Comprimento de s1 e s2: %lu e %lu\n", strlen(s1), strlen(s2));
    
    //Retorna 0 se s1 e s2 são iguais; menor que 0 se s1 < s2; maior que 0 se s1 > s2
    if(!strcmp(s1, s2)) printf("As strings são iguais.\n");
    else if(strcmp(s1, s2) < 0) printf("s1 é menor que s2.\n");
    else printf("s1 é maior que s2.\n");
    
    //Concatena s2 no final de s1
    strcat(s1, s2);
    printf("%s\n", s1);
    
    //Copia s2 em s1
    strcpy(s1, s2);
    printf("%s\n", s1);
    
    //Retorna um ponteiro para a primeira ocorrência de "o" em "alo"
    if(strchr("alo", 'o')) printf("o está em alo\n");
    
    //Retorna um ponteiro para a primeira ocorrência de "ola" em "ola aqui"
    if(strstr("ola aqui", "ola") printf("ola encontrado\n");
}
