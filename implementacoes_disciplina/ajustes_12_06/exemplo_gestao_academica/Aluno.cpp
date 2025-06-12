#include "Pessoa.cpp"

class Aluno : public Pessoa{
    private:
    int numero_matricula;

    public:
    Aluno(string nome_passado, int idade_passada, int numero_matricula_passado): Pessoa(nome_passado, idade_passada){
        this->numero_matricula = numero_matricula_passado;
    }

    int getNumeroMatricula(){
        return this->numero_matricula;
    }

    void setNumeroMatricula(int novo_numero_matricula){
        this->numero_matricula = novo_numero_matricula;
    }

    void toString() override{
        cout << "Informações Aluno:\n\n";
        cout << "Nome -> " << this->getNome() << "\n";
        cout << "Idade -> " << this->getIdade() << "\n";
        cout << "Numero de matricula -> " << this->getNumeroMatricula() << "\n";
    }
};