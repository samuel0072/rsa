#include "../headers/util.h"
#include <stdio.h>

int countDig(LONG n) {
  int i = 0;

  while(n > 0) {
    n = n/10;
    i++;
  }
  return i;
}

//c em caixa baixa
char precod(char c) {
    char d;
    if(c == ' ') {
        d = 26;
    }
    else {
        d = c - 97;
    }
    return d;
}