#include "../headers/modulus.h"

LONG codDecod(LONG n,LONG e, LONG block ) {
  LONG expo = pmodn(block, e, n);
  return expo;
}

LONG pmodn(LONG z, LONG e,LONG n ) {
  LONG b = z;
  LONG m = e;
  LONG p = 1;

  while(m!= 0) {
    if(m%2 != 0) {
      p = (b*p) % n;
    }
    m = m/2;
    b = (b*b) %n;
  }
  return p;
}

LONG mdc(LONG a,LONG b) {
  if (b == 0) {
    return a;
  }
  return mdc(b, a % b);
}