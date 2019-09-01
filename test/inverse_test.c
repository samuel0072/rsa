#include <stdio.h>
#include "../headers/inverse.h"
#include "../headers/default.h"

int main() {
	LONG inv = inverse_calc(233, 144);
	printf("%lld", inv);
}