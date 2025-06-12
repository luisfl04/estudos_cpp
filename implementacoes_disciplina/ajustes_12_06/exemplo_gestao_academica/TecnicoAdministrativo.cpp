#include "Pessoa.cpp"

class TecnicoAdministrativo : public Pessoa{
    private:
    string cargo_atual;

    public:
    TecnicoAdministrativo(string nome, int idade, string cargo_atual_definido) : Pessoa(nome, idade){
        this->cargo_atual = cargo_atual_definido;
    }

    string getCargoAtual(){
        return this->cargo_atual;
    }

    void setCargoAtual(string novo_cargo){
        this->cargo_atual = novo_cargo;
    }

    void toString() override{
        cout << "Informações do Tecnico Administrativo:\n\n";
        cout << "Nome -> " << this->getNome() << "\n";
        cout << "Idade -> " << this->getIdade() << "\n";
        cout << "Cargo que exerce atualmente -> " << this->getCargoAtual() << "\n";
    }
};