// Libs
#include <iostream>
#include "Funcionario.h"

string Funcionario::getNome(){
  return nome;
}

string Funcionario::getCargo(){
  return cargo;
}

int Funcionario::getIdade(){
  return idade;
}

double Funcionario::getSalario(){
  return salario;
};

void Funcionario::setNome(string novo_nome){
  nome = novo_nome;
}

void Funcionario::setIdade(int nova_idade){
  idade = nova_idade;
}

void Funcionario::setSalario(double novo_salario){
  salario = novo_salario;
}

void Funcionario::setCargo(string novo_cargo){
  cargo = novo_cargo;
}

void Funcionario::verificarCargoFuncionario(string cargo_passado){
  /* Verifica se a string está entre o valores e pede um novo enquanto há valores inválidos: */
  while(cargo_passado != "gerente" &&
    cargo_passado != "programador" &&
    cargo_passado != "professor"
  ){
    cout << "O cargo é inválido\nDigite o cargo novamente aqui -> ";
    cin >> cargo_passado;
  }

  setCargo(cargo_passado);
}

double Funcionario::calcularSalarioFuncionario(double salario_base_passado, string cargo_passado){
  /* Calcula o valor do salario com base no cargo */
  if (cargo_passado == "programador"){
    salario_base_passado += (salario_base_passado * 0.40);
  }
  else if(cargo_passado == "gerente"){
    salario_base_passado += (salario_base_passado * 0.25);
  }
  else{
    salario_base_passado += (salario_base_passado * 0.20);
  }

  return salario_base_passado;
}


void Funcionario::definirInformacoesFuncionario(){
  /* Método que obtém dados do usuário via teclado e define na instância da classe e define usando os
  métodos SET definidos na classe: */

  // Variáveis auxiliares que irão armazenar as informações de forma temporária para definir na classe.
  string nome_funcionario;
  double salario_funcionario;
  int idade_funcionario;
  string cargo_funcionario;

  // Obtendo valores:
  cout << "Digite o nome do funcionario -> ";
  cin >> nome_funcionario;
  cout << "\nInforme sua idade -> ";
  cin >> idade_funcionario;
  cout << "\nInforme o cargo que você exerce na empresa -> ";
  cin >> cargo_funcionario;
  verificarCargoFuncionario(cargo_funcionario);
  cout << "\nDigite o seu salário -> ";
  cin >> salario_funcionario;

  // Definindo os valores na classe:
  double salario_calculado_funcionario = calcularSalarioFuncionario(salario_funcionario, cargo_funcionario);
  setSalario(salario_calculado_funcionario);
  setNome(nome_funcionario);
  setIdade(idade_funcionario);

  cout << "\nDados definidos com sucesso!";
}

void Funcionario::toString(){
  cout << "\n\nDados do Funcionario:\n";
  cout << "Nome -> " << getNome() << "\n";
  cout << "Idade -> " << getIdade() << "\n";
  cout << "Cargo na empresa -> " << getCargo() << "\n";
  cout << "Salario atual -> " << getSalario() << "\n";
}
