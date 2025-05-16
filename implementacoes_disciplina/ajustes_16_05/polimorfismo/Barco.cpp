#include <iostream>
#include <string>
#include "Veiculo.cpp"
using namespace std;


class Barco: public Veiculo{

    private:
    string tipo_barco;

    public:
    void setNomeTipo(string novo_nome_tipo) override{
        this->nome_tipo = novo_nome_tipo;
    }





};