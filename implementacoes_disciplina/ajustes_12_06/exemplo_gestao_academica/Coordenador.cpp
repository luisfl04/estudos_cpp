#include "Professor.cpp"

class Coordenador : public Professor{
    private:
    string departamento_coordenado;

    public:
    Coordenador(string nome, int idade, int codigo_materia_lecionava, string departamento_coordenado_definido) : Professor(nome, idade, codigo_materia_lecionava){
        this->departamento_coordenado = departamento_coordenado_definido;
    }

    string getDepartamentoCoordenado(){
        return this->departamento_coordenado;
    }

    void setDepartamentoCoordenado(string departamento_coordenado_definido){
        this->departamento_coordenado = departamento_coordenado_definido;
    }

    void toString() override{
        cout << "Informações do coordenador:\n\n";
        cout << "Nome -> " << this->getNome() << "\n";
        cout << "Idade -> " << this->getIdade() << "\n";
        cout << "Materia Lecionada anteriormente -> " << this->getMateriaLecionada() << "\n";
        cout << "Departamento coordenado atualmente -> " << this->getDepartamentoCoordenado() << "\n";
    }
};