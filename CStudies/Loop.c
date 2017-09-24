//
//  Loop.c
//  CStudies
//
//  Created by Hatsumi Hashi on 23/09/17.
//  Copyright © 2017 Hatsumi Hashi. All rights reserved.
//

#include "Loop.h"

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
