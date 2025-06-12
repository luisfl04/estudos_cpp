#include "dependencia.h"


class Pessoa{
    private:
    string nome;
    int idade;

    public:
    Pessoa(string nome_passado, int idade_passada){
        this->nome = nome_passado;
        this->idade = idade_passada;
    }

    ~Pessoa(){
        cout << "Destruindo pessoa...";
    }

    string getNome(){
        return this->nome;
    }

    int getIdade(){
        return this->idade;
    }

    void setNome(string novo_nome){
        this->nome = novo_nome;
    }

    void setIdade(int nova_idade){
        this->idade = nova_idade;
    }

    virtual void toString() = 0;
};


