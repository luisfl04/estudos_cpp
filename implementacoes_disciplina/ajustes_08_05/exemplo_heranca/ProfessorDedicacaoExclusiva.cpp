// Libs:
#include <iostream>
#include <string>
#include "Professor.h"

class ProfessorDedicacaoExclusiva : public Professor{
private:
  float salario;

public:
  ProfessorDedicacaoExclusiva(const string nome_passado, const string matricula_passada, int idade_passada,
  float salario_passado) : Professor(nome_passado, matricula_passada, idade_passada){
    salario = salario_passado;
  }
};
