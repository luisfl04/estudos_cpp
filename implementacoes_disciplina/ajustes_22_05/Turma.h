#ifndef TURMA_H
#define TURMA_H
#include "Aluno.h"
#include <string>


class Turma{
    private:
    Aluno alunos_turma[7];    
    std::string nome_turma;

    public:
    Turma(std::string nome_turma_inserido);
    ~Turma();
    std::string getNomeTurma();
    void setNomeTurma(std::string novo_nome_turma);

    // Métodos de manipulação:
    void cadastrarAlunos();
    float obterMediaTurma();

};

#endif