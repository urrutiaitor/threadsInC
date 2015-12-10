//
//  productor.c
//  productorConsumidor
//
//  Created by Aitor Urrutia on 3/12/15.
//
//

#include <stdio.h>
#include "buffer.h"
#include "productor.h"
#define NUMVECES 100

void* runProductor (void* valor) {
    int i;
    
    for (i = 0; i < NUMVECES; i++) {
        printf("Productor produce: %d\n", i);
        put(i);
    }
}