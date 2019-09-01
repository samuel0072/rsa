compilar o teste:
gcc "../implementations/inverse.c" -c && gcc "../implementations/list.c" -c && gcc "../implementations/util.c" -c && gcc "inverse.o" "list.o" "util.o" inverse_test.c -o test
