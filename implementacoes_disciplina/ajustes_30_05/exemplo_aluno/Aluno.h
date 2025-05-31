#ifndef ALUNO_H
#define ALUNO_H

// Libs:
#include <iostream>
#include <string>
using namespace std;

class Aluno{
    private:
    int matricula;
    std::string nome;
    float notas[3];
    float media_notas;

    public:
    // Construtor:
    Aluno(int numero_matricula, std::string nome_aluno);
    Aluno();

    // Destrutor:
    ~Aluno();

    // Getters e setters:
    int getMatricula();
    std::string getNome();
    float getMediaNotas();
    float getNota(int numero_nota);
    void setMatricula(int novo_numero_matricula);
    void setNome(std::string novo_nome);
    void setNotas(float primeira_nota, float segunda_nota, float terceira_nota);
    void setMediaNotas();
    void setNotaEspecifica(int numero_nota, float valor_nota);
};


#endif
