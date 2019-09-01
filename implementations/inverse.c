#include "../headers/util.h"
#include "../headers/list.h"
#include "../headers/inverse.h"
#include <stdlib.h>
#include <stdio.h>

void create_table(LONG a, LONG b, node** n) {
		if(b != 0) {
			*n = add_to_list(*n, a/b);
			create_table(b, a%b, n);
		}
} 

LONG inverse_calc(LONG mod, LONG n) {
	node* table = create_empty_list();
	LONG* coef_table;
	LONG u[] = {1, 0};
	LONG v[] = {0, 1};
	LONG a[] = {0, 0};
	int size;
	int i;

	create_table(mod, n, &table);
	coef_table =  list_to_array(table);
	size  = list_size(table);

	for(i = 0; i < size-1; i++) {
		a[0] = u[0] - (coef_table[i]*v[0]);
		a[1] = u[1] - (coef_table[i]*v[1]);
		u[0] = v[0];
		u[1] = v[1];
		v[0] = a[0];
		v[1] = a[1];
	} 

	return v[1]%mod;
}