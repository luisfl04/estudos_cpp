#include <iostream>
#include <string>
using namespace std;


class Veiculo{
    
    protected:
    string nome_tipo;
    
    private:
    int ano_veiculo;
    string placa;
    

    public:
    // Getters:
    int getAnoVeiculo(){
        return ano_veiculo;
    }

    string getPlaca(){
        return placa;
    }

    // Setters:
    void setAnoVeiculo(int novo_ano_veiculo){
        this->ano_veiculo = novo_ano_veiculo;
    }

    void setPlaca(string nova_placa){
        this->placa = nova_placa;
    }

    // Métodos abstratos:
    virtual void setNomeTipo(string novo_tipo) = 0;

};