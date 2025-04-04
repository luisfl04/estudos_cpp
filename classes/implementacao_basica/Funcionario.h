// definição dos valores da classe Funcionario:
#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

// Libs:
#include <string>
using namespace std;

// Definição:
class Funcionario{
private:
  string nome;
  int idade;
  double salario;
  string cargo;
public:
  // Get:
  string getNome();
  string getCargo();
  int getIdade();
  double getSalario();

  // Set:
  void setNome(string novo_nome);
  void setIdade(int nova_idade);
  void setSalario(double novo_salario);
  void setCargo(string novo_cargo);
};


#endif
