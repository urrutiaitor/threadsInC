//
//  buffer.h
//  productorConsumidor
//
//  Created by Aitor Urrutia on 3/12/15.
//
//

#ifndef buffer_h
#define buffer_h

#include <stdio.h>

void inicializarBuffer ();
void put (int valor);
int get();
void destruirBuffer();

#endif /* buffer_h */
