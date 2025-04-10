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
  void toString();

  // Set:
  void setNome(string novo_nome);
  void setIdade(int nova_idade);
  void setSalario(double novo_salario);
  void setCargo(string novo_cargo);

  // Métodos de manipulação:
  void definirInformacoesFuncionario();
  void verificarCargoFuncionario(string cargo_passado);
  double calcularSalarioFuncionario(double salario_base_passado, string cargo_passado);
  


};


#endif
