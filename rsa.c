#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

#define separator '#'


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

//c em caixa baixa
void write(char c, FILE* p) {
    int d;
    if(c == ' ') {
        d = 26;
    }
    else {
        d = c - 97;
    }
    fprintf(p, "%d", d);
}

/*LONG* separate(FILE* cod) {
    LONG* res = (LONG*) malloc(500*sizeof(int));
    int i = 0, j = 0;
    char c;

    fpos_t pos;
    fgetpos(cod, &pos);
    fscanf(cod, "%c", &c);
    if(c == '0') {
        res[0] = 0;
        j++;
    }
    else {
        fsetpos(cod, &pos);
    }
    char bloco[5] = {'\0', '\0', '\0', '\0', '\0'};
    while(!feof(cod)) {
        fscanf(cod, "%c", &c);
        //printf("%c ", c);
        bloco[i] = c;
        i++;
        if(i%4 == 0) {
            i = 0;
            char d;
            fscanf(cod, "%c", &d);
            printf("%c %s", d, bloco);
            if(d == '0') {
                char bloco2[6] = {'\0', '\0', '\0', '\0', '\0' , '\0'};
                int k;
                for(k = 0; k <4; k++) {
                    bloco2[k] = bloco[k];
                }
                bloco2[4] = '0';
                res[j] = atoll(bloco2);
                for(k = 0; k < 4; k++) {
                    bloco[k] = '\0';
                }
            }
            else {
                res[j] = atoll(bloco);
                bloco[0] = d;
                int k;
                for(k = 1; k < 4; k++) {
                    bloco[k] = '\0';
                }
                i++;
            }
            j++;

        }
    }

    if(strlen(bloco) > 0) {
        res[j] = atoll(bloco);
    }
    return res;

}
*/
int countDig(LONG n) {
  int i = 0;

  while(n!=0) {
    n = n/10;
    i++;
  }
  return i;
}
LONG* separate(char str[], LONG n) {

  int blockSize = countDig(n);
  int textSize = strlen(str);
  int blocklen = strlen(textsize)/blockSize;
  LONG* blocks = (LONG*)malloc(blocklen*sizeof(LONG));
  int i, j, k;

  char* subBlock = (char*)malloc(blockSize*sizeof(char));

  for(i = 0, j = 0, k = 0; i < textsize; i++, k++){
      if(k == 0 && str[i] == '0') {
          blocks[j-1] = blocks[j-1]*10;
      }
      else {
          if(i!=0 && i%blockSize == 0 ) {
            LONG aux = atoll(subBlock);
            while(mdc(n, aux) != 1) {
              aux = aux/10;
              i--;
            }
            blocks[j] = aux;
            memset(subBlock, '\0', blockSize);
            j++;
            
          }
          else {
            subBlock[i%blockSize] = str[i];
          }
      }
  }
  if(len(subBlock) != 0) {
    blocks[j] = atoll(subBlock);
  }
  free(subBlock);

  return blocks;
}

int main() {

  /*printf("%d\n", mdc(7, 96*52) == 1);

  LONG msg = codDecod(97*53, 7, 173);
  LONG msg2 = codDecod(97*53, 4279, msg);
  printf("cod = %lld, decod = %lld\n", msg, msg2);
  FILE* p = fopen("cod.txt", "w");
  write('a', p);
  write('b', p);
  fclose(p);*/

  /*FILE* p = fopen("cod.txt", "r");
  LONG* array = separate(p);

  int i;
    printf("\n");
  for(i = 0; i < 4; i++) {
      printf("%lld ", array[i]);
  }*/
 // printf("%d\n", countDig(1111111));

  LONG* blocks = separate();
  return 0;
}
