#include "../headers/encrypt.h"
#include "../headers/util.h"
#include "../headers/modulus.h"
#include <string.h>
#include <stdio.h>
#include <ctype.h>

void encrypt(LONG n, LONG e, char message[]) {

	FILE* output = fopen("output/encrypted.txt", "w");
	int i, size;
	char f;
	size = strlen(message);



	for(i = 0; i < size; i++) {
		message[i] = tolower(message[i]);
		f = precod(message[i]);
		message[i] = f;
	}

	for(i = 0; i < size; i++) {
		LONG block = (LONG)message[i];
		LONG block_cod = codDecod(n, e, block);
		fprintf(output, "%lld%c", block_cod, SEPARATOR);
	}
	fclose(output);
}

int is_okay(char message[]) {
	int i;
	int size = strlen(message);
	int res;

	for(i = 0, res = 1; (i < size) && (res == 1); i++) {
		if(message[i] > 26 || message[i] < 0) {
			res = 0;
		}
	}
	return res;
}