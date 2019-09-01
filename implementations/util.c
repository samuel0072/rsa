#include "../headers/util.h"

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

int countDig(LONG n) {
  int i = 0;

  while(n > 0) {
    n = n/10;
    i++;
  }
  return i;
}