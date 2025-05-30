#include "Notebook.h"





int main(){

  Notebook* meu_notebook = new Notebook(4.5, 2, 19.9);
  meu_notebook->definirQuantidadeMemoriaSecundaria();
  cout << "Quantidade de memória -> " <<  meu_notebook->getQuantidadeMemoriaSecundaria();
  return 1;
}
