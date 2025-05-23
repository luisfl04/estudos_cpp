#ifndef TURMA_H
#define TURMA_H
#include "Aluno.h"
#include <string>


class Turma{
    private:
    Aluno alunos_turma[7]; 
    float media_alunos_turma;   
    std::string nome_turma;

    public:
    Turma(std::string nome_turma_inserido);
    ~Turma();
    std::string getNomeTurma();
    float getMediaAlunosTurma();
    void setNomeTurma(std::string novo_nome_turma);
    void setMediaAlunosTurma(float nova_media);

    // Métodos de manipulação:
    void cadastrarAlunos();
    float obterMediaTurma();
    void obterAlunosAcimaMedia();

};

#endif