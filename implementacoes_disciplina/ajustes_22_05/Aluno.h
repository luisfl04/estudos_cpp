#ifndef ALUNO_H
#define ALUNO_H

// Libs:
#include <iostream>
#include <string>

class Aluno{
    private:
    int matricula;
    std::string nome;
    float notas[3];

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
    void setNota(int numero_nota, float nova_nota); 
};


#endif