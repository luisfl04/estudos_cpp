#include "Funcionario.h"

// Construtor padrão
Funcionario::Funcionario() : nome("Indefinido"), salario(0.0) {}

// Construtor parametrizado
Funcionario::Funcionario(string nome, float salario) : nome(nome), salario(salario) {}

// Implementação dos métodos da interface
void Funcionario::set_nome(const string& nome) {
    this->nome = nome;
}

void Funcionario::set_salario(float salario) {
    this->salario = salario;
}

string Funcionario::get_nome() const {
    return nome;
}

float Funcionario::get_salario() const {
    return salario;
}

float Funcionario::calcula_salarionovo(float percentual) const {
    return salario + (salario * percentual);
}

void Funcionario::print() const {
    cout << "Nome: " << nome << endl;
    cout << "Salário: " << salario << " reais\n";
}
