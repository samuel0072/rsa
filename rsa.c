#include <stdio.h>
#include <math.h>

long long int pmodn(long long int z, long long int e,long long int n ) {
  long long int b = z;
  long long int m = e;
  long long int p = 1;

  while(m!= 0) {
    if(m%2 != 0) {
      p = (b*p) % n;
    }
    m = m/2;
    b = (b*b) %n;
  }
  return p;
}
long long int codDecod(long long int n,long long int c, long long int b ) {
  long long int expo = pmodn(b, c, n);

  return expo;
}

int mdc(int c,int fi) {
  if (fi == 0) {
    return c;
  }
  return mdc(fi, c % fi);
}

int main() {

  printf("%d\n", mdc(7, 96*52) == 1);

  long long int msg = codDecod(97*53, 7, 173);
  long long int msg2 = codDecod(97*53, 4279, msg);
  printf("cod = %lld, decod = %lld\n", msg, msg2);
  //isPrime(97, 53, 7)
  return 0;
}
