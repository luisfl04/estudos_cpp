#include "Turma.h"
using namespace std;

Turma::Turma(string nome_turma_inserido){
    this->nome_turma = nome_turma_inserido;
}

Turma::~Turma(){
    cout << "Excluindo objeto turma de nome -> " << this->nome_turma << "\n";
}

string Turma::getNomeTurma(){
    return this->nome_turma;
}

float Turma::getMediaAlunosTurma(){
    return this->media_alunos_turma;
}

void Turma::setNomeTurma(string novo_nome_turma){
    this->nome_turma = novo_nome_turma;
}

void Turma::cadastrarAlunos(){
    // Variáveis que receberão os valores:
    int matricula_aluno, primeira_nota, segunda_nota, terceira_nota, aluno_atual = 0;
    string nome_aluno;

    // Obtendo os valores:
    cout << "Cadastro de Alunos na turma " << this->getNomeTurma() << "\n\n";
    do{ 
        cout << "ALUNO " << aluno_atual + 1 << ":";
        cout << "\nDigite o numero de matricula de aluno -> ";
        cin >> matricula_aluno;

        cout << "\nNome do aluno -> ";
        cin >> nome_aluno;

        cout << "\nPrimeira nota -> ";
        cin >> primeira_nota;

        cout << "\nPrimeira nota -> ";
        cin >> segunda_nota;

        cout << "\nPrimeira nota -> ";
        cin >> terceira_nota;

        // Cadastrando aluno:
        this->alunos_turma[aluno_atual].setMatricula(matricula_aluno);
        this->alunos_turma[aluno_atual].setNome(nome_aluno);
        this->alunos_turma[aluno_atual].setNota(0, primeira_nota);
        this->alunos_turma[aluno_atual].setNota(1, segunda_nota);
        this->alunos_turma[aluno_atual].setNota(2, terceira_nota);

    }while(aluno_atual < 7);

}

float Turma::obterMediaTurma(){
    float soma_notas_turma = 0.0, media_alunos_turma;
    for(int i = 0; i < 7; i++){
        soma_notas_turma += alunos_turma[i].getMediaNotas();
    }

    media_alunos_turma = soma_notas_turma / 7;
    this->setMediaAlunosTurma(media_alunos_turma);
    cout << "A media dos alunos da turma é -> " << this->getMediaAlunosTurma() << "\n";
    return getMediaAlunosTurma();
}

void Turma::obterAlunosAcimaMedia(){
    for(int i = 0; i < 7, i++){
        if(this->alunos_turma[i].getMediaNotas() >= 7.0){
            cout << "Aluno " << this->alunos_turma[i].getNome() << " está acima da média!";
        }
    }
}