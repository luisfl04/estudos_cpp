// Libs:
#include <iostream>
#include "classes/implementacao_basica/Funcionario.h"


int main(){
  Funcionario func;

  func.setNome("Pedro");
  cout << "Nome definido -> " << func.getNome();

  return 0;
}
