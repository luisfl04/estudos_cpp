#include <iostream>
#include <string>

using namespace std;

// Classe base Pessoa
class Pessoa {

protected:
    string nome;
    int idade; 
    string cpf;

public:

    // Construct:
    Pessoa(string nome_passado, int idade_passada, string cpf_passado){
        setNome(nome_passado);
        setIdade(idade_passada);
        this->cpf = cpf_passado;
    }

    // Métodos Get:
    string getNome() {
        return nome; 
    }
    
    int getIdade(){
        return idade;
    }

    string getCPF(){
        return cpf;
    }

    // Setters:
    void setNome(string novo_nome) { 
        this->nome = novo_nome; 
    }

    void setIdade(int nova_idade){
        this->idade = nova_idade;
    }

    // Método para imprimir dados gerais:
    void print() {
        cout << "\n\nDados da Pessoa:" << endl;
        cout << "Nome: " << nome << endl;
        cout << "Idade: " << idade << endl;
        cout << "CPF: " << cpf << endl;
    }

    virtual void setCPF(string cpf_passado) const = 0;


    // Destrutor virtual para garantir destruição correta
    virtual ~Pessoa() {}
};
