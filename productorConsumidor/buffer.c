//
//  buffer.c
//  productorConsumidor
//
//  Created by Aitor Urrutia on 3/12/15.
//
//

#include <semaphore.h>
#include "buffer.h"

#define MAXVALORES 4

int buffer [MAXVALORES];
int indiceEntrada;
int indiceSalida;

sem_t semLleno, semVacio;

void inicializarBuffer () {
    indiceEntrada = 0;
    indiceSalida = 0;
    
    sem_init (&semLleno, 0, MAXVALORES);
    sem_init (&semVacio, 0, 0);
    
}

void put (int valor) {
    sem_wait(&semLleno);
    buffer[indiceEntrada] = valor;
    indiceEntrada = (indiceEntrada++)%MAXVALORES;
    sem-post (&semVacio);
}

int get () {
    int valor;
    
    sem_wait (&semVacio);
    valor = buffer[indiceSalida];
    indiceSalida = (indiceSalida++)%MAXVALORES;
    
    return valor;
}

void destruirBuffer () {
    sem_destroy(&semLleno);
    sem_destroy(&semVacio);
}
