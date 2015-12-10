//
//  principal.c
//  productorConsumidor
//
//  Created by Aitor Urrutia on 3/12/15.
//
//

#include <stdio.h>
#include <pthread.h>
#include "buffer.h"
#include "productor.h"
#include "consumidor.h"

pthread_t hiloConsumidor, hiloProductor;
void iniciar () {
    inicializarBuffer ();
    pthread_create (&hiloProductor, NULL, runProductor, NULL);
    pthread_create (&hiloConsumidor, NULL, runConsumidor, NULL);
}

void esperar () {
    pthread_join (hiloProductor, NULL);
    pthread_join (hiloProductor, NULL);
    destruirBuffer();
}

int main (int argc, const char * argv[]) {
    iniciar();
    esperar();
    return 0;
}
