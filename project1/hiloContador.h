//
//  hiloContador.h
//  project1
//
//  Created by Aitor Urrutia on 3/12/15.
//
//

#ifndef hiloContador_h
#define hiloContador_h

#include <stdio.h>

typedef struct parametros {
    int id;
    int incremento;
} PRAMETROS, *pPARAMETROS;

void* runHiloContador (void*);

#endif /* hiloContador_h */
