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
