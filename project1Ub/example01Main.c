#include "functions01.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (int argc, char* argv [])
{
  //char str01[32], str02[32];
  unsigned int  n1, n2;

  if(argc!=3)
  {
    printf ("calling error. Correct format: %s <aNumber> <aNumber>", argv[0]); 
    exit(-1);
  }
  //printf ("give me a natural number: ");
  //gets (str01);
  //sscanf(str01,"%u",&n1);
  sscanf(argv[1],"%u",&n1);
  //printf ("give me a natural number: ");
  //gets(str02);
  //sscanf(str02,"%u",&n2);
  sscanf(argv[2],"%u",&n2);
  printf("lcm(%u,%u)=%u\n", n1, n2, lcm(n1,n2));
  printf("gcd(%u,%u)=%u\n", n1, n2, gcd(n1,n2));
  return 0;
}
