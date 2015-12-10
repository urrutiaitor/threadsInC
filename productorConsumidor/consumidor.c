//
//  consumidor.c
//  productorConsumidor
//
//  Created by Aitor Urrutia on 3/12/15.
//
//

#include "consumidor.h"
#include <stdio.h>
#include "buffer.h"
#define NUMVECES 100;

void* runConsumidor (void* valor) {
    int i;
    int valor;
    
    for (i = 0; i < NUMVECES; i++) {
        valor = get();
        printf("Consumidor consume: %d\n", valor);
    }
}