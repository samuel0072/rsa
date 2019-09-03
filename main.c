#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

#include "headers/default.h"
#include "headers/inverse.h"
#include "headers/modulus.h"
#include "headers/encrypt.h"
#include "headers/decrypt.h"

void menu1() {
  system("cls");
  printf("1-\tGERAR CHAVES\n");
  printf("2-\tCRIPTOGRAFAR\n");
  printf("3-\tDESCRIPTOGRAFAR\n");
}
void menu_gerar_chaves() {
  system("cls");
  printf("DIGITE P, Q, e E\n");
}
void menu_criptografar() {
  system("cls");
  printf("DIGITE SUA CHAVE PARA CRIPTOGRAFAR NA FORMA:\n");
  printf("n e\n");
}
void menu_descriptografar() {
  system("cls");
  printf("DIGITE SUA CHAVE PARA DESCRIPTOGRAFAR NA FORMA:\n");
  printf("n e\n");
}
void limpar_entrada() {
  fflush(stdin);
}
int main() {

  LONG p, q, n, e, d;
  char message[1000];
  int choice;
  FILE* k;

  while(1) {
    printf("\tRSA\n");
    menu1();
    limpar_entrada();
   
    scanf(" %d", &choice);
    switch(choice) {
       printf("a");
      case 1:
        k = fopen("output/keys.txt", "w");
        limpar_entrada();
        menu_gerar_chaves();
        scanf("%lld %lld %lld", &p, &q, &e);
        if(mdc((p-1)*(q-1), e) != 1) {
          printf("Expoente não valido");
          exit(0);
        }
        n = p*q;
        d = inverse_calc(n, e);

        printf("Sua chave publica: (%lld, %lld)\n", n, e);
        printf("Sua chave privada: (%lld, %lld)\n", n, d);
        printf("Suas chaves estao no arquivo output/keys.txt\n\n");

        fprintf(k, "chave publica: (%lld, %lld)\nchave privada: (%lld, %lld)", n, e, n, d);
        printf("Digite algo para sair");
        limpar_entrada();
        scanf("%c", &choice);
        fclose(k);
        break;

      case 2:
        limpar_entrada();
        menu_criptografar();

        scanf("%lld %lld", &n, &e);
        limpar_entrada();

        printf("Digite sua mensagem:\n");
        scanf("%[^\n]", message);
        limpar_entrada();

        encrypt(n, e, message);

        printf("Sua mensagem esta no arquivo output/encrypted.txt\n");
        printf("Digite qualquer coisa ara sair\n");

        scanf(" %c", &choice);
        break;
      case 3:
        k = fopen("output/message.txt", "w");
        limpar_entrada();
        menu_descriptografar();

        scanf("%lld %lld", &n, &e);
        limpar_entrada();

        printf("Digite sua mensagem criptografada:\n");
        scanf("%[^\n]", message);
        limpar_entrada();
        fprintf(k, "%s", message);
        limpar_entrada();
        fclose(k);
        decrypt(n, e);

        printf("Sua mensagem esta no arquivo output/decrypted.txt\n");
        printf("Digite qualquer coisa ara sair\n");

        scanf(" %c", &choice);
        break;
      default:
        printf("Opçao nao valida\nDigite qualquer coisa para sair");
        scanf(" %c", &choice);
        break;
    }
    
  }

  return 0;
}
