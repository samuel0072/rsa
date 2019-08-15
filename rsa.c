#include <stdio.h>
#include <math.h>


typedef long long int LONG;

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

LONG codDecod(LONG n,LONG c, LONG b ) {
  LONG expo = pmodn(b, c, n);
  return expo;
}

LONG mdc(LONG c,LONG fi) {
  if (fi == 0) {
    return c;
  }
  return mdc(fi, c % fi);
}

int main() {

  printf("%d\n", mdc(7, 96*52) == 1);

  LONG msg = codDecod(97*53, 7, 173);
  LONG msg2 = codDecod(97*53, 4279, msg);
  printf("cod = %lld, decod = %lld\n", msg, msg2);
  return 0;
}
