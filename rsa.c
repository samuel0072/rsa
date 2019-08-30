#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

#define separator '#'


typedef unsigned long long int LONG;

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

//c em caixa baixa
int write(char c) {
    int d;
    if(c == ' ') {
        d = 26;
    }
    else {
        d = c - 97;
    }
    return d;
}

int countDig(LONG n) {
  int i = 0;

  while(n > 0) {
    n = n/10;
    i++;
  }
  return i;
}
LONG* separate(char str[], LONG n) {

  int blockSize = countDig(n)-1;
  int textSize = strlen(str);
  int blocklen = textSize/blockSize;
  LONG* blocks = (LONG*)malloc(blocklen*sizeof(LONG));
  int i, j, k;

  char* subBlock = (char*)malloc(blockSize*sizeof(char));
  memset(subBlock, 0, blockSize);
  memset(blocks, 0, blocklen);

  if(textSize%blockSize ) {
    blocklen++;
  }

  for(i = 0, j = 0, k = 0; i < textSize; i++){
      if(k == 0 && str[i] == '0') {
          blocks[j-1] = blocks[j-1]*10;
      }
      else {
          subBlock[k] = str[i]; 
          k++;
          k = k%blockSize;
          if(k == 0 ) {
            LONG aux = atoll(subBlock);
            blocks[j] = aux;
            memset(subBlock, 0, blockSize);
            j++;
          } 
      }
  }
  if(strlen(subBlock) != 0) {
    blocks[j] = atoll(subBlock);
  }
  
  free(subBlock);

  return blocks;
}

int main() {


  char a[] = "1230060451235111";

  LONG* blocks = separate(a, 4824);
  int i;
  for(i=0; i < 5; i++){
    printf("%d, ", blocks[i]);
  }
  return 0;
}
