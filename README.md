compilar esse caraio:
gcc "../implementations/inverse.c" -c && gcc "../implementations/list.c" -c && gcc "../implementations/util.c" -c && gcc "inverse.o" "list.o" "util.o" inverse_test.c -o test

gcc "../implementations/util.c" -c && gcc "../implementations/modulus.c" -c && gcc  "../implementations/encrypt.c" -c && gcc "util.o" "modulus.o" "encrypt.o" cript_test.c -o cript

gcc "../implementations/util.c" -c && gcc "../implementations/modulus.c" -c  && gcc  "../implementations/decrypt.c" -c && gcc "util.o" "modulus.o" "decrypt.o" dec_test.c -o dec