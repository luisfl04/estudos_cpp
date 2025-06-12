#include "Pessoa.cpp"


class Professor : public Pessoa {

    private:
    enum Materias{portugues, matematica, ciencias, historia, geografia};
    int codigo_materia;
    string materia_lecionada;

    public:
    Professor(string nome, int idade, int codigo_materia_passado)
    : Pessoa(nome, idade)
    {
        this->codigo_materia = codigo_materia_passado;
        this->materia_lecionada = definirMateriaLecionada(codigo_materia);
    }

    string definirMateriaLecionada(int codigo_materia_passado){
        switch (codigo_materia_passado)
        {
        case 1:
            return "portugues";
            break;
        
        case 2:
            return "matematica";
            break;

        case 3:
            return "ciencias";
            break;

        case 4:
            return "historia";
            break;
        
        case 5:    
            return "geografia";
            break;
        
        default:
            cout << "Valor numérico passado por parâmetro inválido!";
            break;
        }
    }

    string getMateriaLecionada(){
        return this->materia_lecionada;
    }

    void toString() override{
        cout << "Informações do professor:\n\n";
        cout << "Nome -> " << this->getNome() << "\n";
        cout << "Idade -> " << this->getIdade() << "\n";
        cout << "Materia Lecionada -> " << this->getMateriaLecionada() << "\n";
    }

};