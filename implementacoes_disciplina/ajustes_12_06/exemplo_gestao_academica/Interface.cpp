#include "Aluno.cpp"

class Interface{
    public:
    void obterDadosAluno(){
        Aluno novo_aluno("Pedro", 20, 4567);
        novo_aluno.toString();
    }   
};

int main(){
    Interface Interface;
    Interface.obterDadosAluno();
    return 0;
}