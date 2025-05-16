#ifndef INTERFACE_FUNCIONARIO_H
#define INTERFACE_FUNCIONARIO_H
#include <string>
using namespace std;


class InterfaceFuncionario {
public:
    // Métodos abstratos
    virtual void set_nome(const string& nome) = 0;
    virtual void set_salario(float salario) = 0;
    virtual string get_nome() const = 0;
    virtual float get_salario() const = 0;
    virtual float calcula_salarionovo(float percentual) const = 0;
    virtual void print() const = 0;

    // Destruct:
    virtual ~InterfaceFuncionario() = 0;
};


inline InterfaceFuncionario::~InterfaceFuncionario() {}

#endif