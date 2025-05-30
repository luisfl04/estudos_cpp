#include "Dispositivo.h"
#include <iostream>
using namespace std;

int main(){

  Dispositivo* meu_dispositivo = new Dispositivo(2.3, 4);
  meu_dispositivo->setQuantidadeMemoriaSecundaria();
  meu_dispositivo->exibirConfiguracoesDispositivo();
  return 1;
}
