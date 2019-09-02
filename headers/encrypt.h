#include "default.h"

//recebe o par (n, c) que é a chave para criptografar
//recebe message que é a mensagem a ser criptografada
//salva no arquivo message.txt
void encrypt(LONG n, LONG e, char message[]);

//verificar a mensagem esta dentro do especificado
//para ser criptografada
int is_okay(char message[]);