//
//  hiloContador.c
//  project1
//
//  Created by Aitor Urrutia on 3/12/15.
//
//

#include <malloc.h>
#include "hiloContador.h"
#define MAXVALOR 1000

void* runHiloContador (void* valor) {
    pPARAMETROS pParametros = (pPARAMETROS) valor;
    int id = pParametros->id;
    int incremento = pParametros->incremento;
    int i;
    
    for (i = 0; i < MAXHILOS; i+=incremento) {
        printf ("Hilo %d:%d\n", id, i);
    }
    
    free(pParametros);
    
    return NULL;
}
