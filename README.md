compilar esse caraio:
gcc "../implementations/inverse.c" -c && gcc "../implementations/list.c" -c && gcc "../implementations/util.c" -c && gcc "inverse.o" "list.o" "util.o" inverse_test.c -o test

gcc "../implementations/util.c" -c && gcc "../implementations/modulus.c" -c && gcc  "../implementations/inverse.c" -c && gcc  "../implementations/encrypt.c" -c && gcc "util.o" "modulus.o" "inverse.o" "encrypt.o" cript_test.c -o cript