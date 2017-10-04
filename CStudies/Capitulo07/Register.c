//
//  Register.c
//  CStudies
//
//  Created by Hatsumi Hashi on 25/09/17.
//  Copyright © 2017 Hatsumi Hashi. All rights reserved.
//

#include "Register.h"

int EspecificadorRegister(register int m, register int e){
    //Variáveis do tipo register são mais rápidas
    register int temp;
    
    temp = 1;
    
    for(; e; e--) temp = temp * m;
    
    return temp;
}
