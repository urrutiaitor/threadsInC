//
//  principal.c
//  project1
//
//  Created by Aitor Urrutia on 3/12/15.
//
//


#include <pthread.h>
#include <malloc.h>
#include "hiloContador.h"
#define MAXHILOS 10

pthread_t hilos [MAXHILOS];

void crearIniciarHilos () {
    int i;
    
    for (i = 0; i < MAXHILOS; i++) {
        pParametros = malloc (sizeof (PARAMETROS));
        pParametros->id = i;
        pParametros->incremento = i+1;
        pthread_create (&hilos[i], NULL, runHiloContador, (void*) pParametros);
    }
}

void esperarHilos () {
    int i;
    
    for (i = 0; i < MAXHILOS; i++) {
        pthread_join (hilos[i], NULL);
    }
}

int main (int argc, char** argv) {
    crearIniciarHilos ();
    esperarHilos();
}

