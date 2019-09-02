#include <stdio.h>
#include "../headers/decrypt.h"
#include "../headers/util.h"
#include "../headers/modulus.h"


void decrypt(LONG n, LONG e) {
	char sep = SEPARATOR;//definido em default.h
	FILE* p = fopen("../output/message.txt", "r");//arquivo que vai ta o texto criptografado lido na entrada
	FILE* c = fopen("../output/decrypted.txt", "w");//arquivo de saída
	LONG d;
	char f = 'w';
	fscanf(p, "%lld%c", &d, &sep);
	do  {
		d = codDecod(n, e, d);
		f = decod((char)d);
		printf("%c", f);
		fprintf(c, "%c", f);
		fscanf(p, "%lld%c", &d, &sep);

	}while(!feof(p));
	fclose(c);
}