#ifndef FUNC_H
#define FUNC_H
#include "InterfaceFuncionario.h"
#include <iostream>
using namespace std;

// Classe Funcionario implementa a interface IFuncionario
class Funcionario : public InterfaceFuncionario {
private:
    string nome;
    float salario;

public:
    // Construtores
    Funcionario();
    Funcionario(string nome, float salario);

    // Métodos da interface implementados
    void set_nome(const string& nome) override;
    void set_salario(float salario) override;
    string get_nome() const override;
    float get_salario() const override;
    float calcula_salarionovo(float percentual) const override;
    void print() const override;
};

#endif