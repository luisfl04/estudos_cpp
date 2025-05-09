// Libs:
#include <iostream>
#include "implementacoes_disciplina/ajustes_08_05/exemplo_heranca/ProfessorHorista.cpp"
using namespace std;

int main(){
  ProfessorHorista exemplo("Alexandro","A87G", 30, 30, 133.98);
  cout << "Nome do professor 'horista' -> " << exemplo.getNome();
  return 0;
}
