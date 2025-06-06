#include "Turma.h"

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

void Turma::cadastrarAluno(){
    // Variáveis que receberão os valores:
    int matricula_aluno, escolha_cadastro_novo_aluno = 1;
    string nome_aluno;
    float primeira_nota, segunda_nota, terceira_nota;

    // Obtendo os valores:
    cout << "Cadastro de Alunos na turma " << this->getNomeTurma() << "\n\n";
    do{
        cout << "\nALUNO " << alunos_turma.size() + 1 << ":";
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
        Aluno* novo_aluno = new Aluno(matricula_aluno, nome_aluno);
        novo_aluno->setNotas(primeira_nota, segunda_nota, terceira_nota);
        alunos_turma.push_back(novo_aluno);

        // Perguntando escolha:
        cout << "\nDeseja cadastrar um novo aluno?\nDigite 1 para continuar\nDigite 0 para finalizar\n->";
        cin >> escolha_cadastro_novo_aluno;

    }while(escolha_cadastro_novo_aluno == 1);

}

void Turma::setMediaAlunosTurma(float nova_media){
  this->media_alunos_turma = nova_media;
}

float Turma::obterMediaTurma(){
    float soma_notas_turma = 0.0, media_alunos_turma;
    for(size_t aluno_atual = 0; aluno_atual < alunos_turma.size(); aluno_atual++){
        soma_notas_turma += alunos_turma[aluno_atual]->getMediaNotas();
    }

    media_alunos_turma = soma_notas_turma / alunos_turma.size();
    this->setMediaAlunosTurma(media_alunos_turma);
    cout << "A media dos alunos da turma é -> " << this->getMediaAlunosTurma() << "\n";
    return getMediaAlunosTurma();
}

void Turma::obterAlunosAcimaMedia(){
    for(size_t aluno_atual = 0; aluno_atual < alunos_turma.size(); aluno_atual++){
        if(this->alunos_turma[aluno_atual]->getMediaNotas() >= 7.0){
            cout << "Aluno " << this->alunos_turma[aluno_atual]->getNome() << " está acima da média!\n";
        }
    }
}
