#include "modulos.h"

//recebe o par (n, d) que é a chave privada
//recebe message que é a mensagem a ser criptografada
//salva no arquivo message.txt
void encrypt(LONG n, LONG d, char message[]);

//verificar a mensagem esta dentro do especificado
//para ser criptografada
int is_okay(char message[]);