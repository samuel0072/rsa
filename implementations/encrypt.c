#include "../headers/encrypt.h"
#include "../headers/inverse.h"
#include "../headers/util.h"
#include "../headers/modulus.h"
#include <string.h>
#include <stdio.h>


void encrypt(LONG n, LONG d, char message[]) {

	FILE* output = fopen("../output/message.txt", "w");
	int i, size;
	size = strlen(message);

	for(i = 0; i < size; i++) {
		message[i] = precod(message[i]);
	}
	for(i = 0; i < size; i++) {
		LONG block = (LONG)message[i];
		LONG block_cod = codDecod(n, d, block);
		fprintf(output, "%lld", block_cod);
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