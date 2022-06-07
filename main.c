#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "menu.h"
#include "arvore.h"
#include "arqProfissional.h"

int main() {
  iniciarArvore(); //arvore.bin
  iniciaArquivo(); //profissional.bin
  
  printf("Arvore B\nTrabalho II de Algoritmos e Estruturas de Dados");
	printf("Lucas Tomio Darim e Enzo Bonfante\n\n");
  menuEntrada();

  return 0;
}