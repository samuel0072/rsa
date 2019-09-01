#include <stdio.h>
#include "../headers/inverse.h"
#include "../headers/default.h"

int main() {
	LONG inv = inverse_calc(23936, 23935);
	printf("%lld", inv);
}