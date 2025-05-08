#ifndef PROFESSOR_H
#define PROFESSOR_H

// Libs:
#include <string>
using std::string;

class Professor{
    private:
    string nome;
    string matricula;
    int idade;

    public:
    Professor(const string nome_passado, const string matricula_informada, int idade_passada );
    string getNome();
    string getMatricula();
    int getIdade();
    void setNome(string nome_passado);
    void setMatricula(string matricula_passado);
    void setIdade(int idade_passada);
};

#endif