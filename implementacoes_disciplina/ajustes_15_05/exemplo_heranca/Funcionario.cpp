// Libs:
#include "Pessoa.cpp"
#include <iostream>
#include <string>

// namespaces
using namespace std;


// Classe derivada Func
class Funcionario : public Pessoa {
    private:
        float salario;
        int numero_matricula;
        string nome_cargo;

    public:
        // Construct:
        Funcionario(string nome_passado, int idade_passada, string cpf_passado, float salario_recebido, 
        int matricula_informada, string cargo_exercido 
        ) : Pessoa(nome_passado, idade_passada, cpf_passado){
            setSalario(salario_recebido);
            setNumeroMatricula(matricula_informada);
            setNomeCargo(cargo_exercido);
        }

        // Método abstrato da classe pai:
        void setCPF(string novo_cpf) const override{
            this->cpf = novo_cpf;
        }

        // Getters:
        float getSalario() {
            return salario; 
        }

        int getNumeroMatricula(){
            return numero_matricula;
        }

        string getNomeCargo(){
            return nome_cargo;
        }

        // Setters:
        void setSalario(float novo_salario) {
            salario = novo_salario; 
        }

        void setNumeroMatricula(int nova_matricula){
            this->numero_matricula = nova_matricula;
        }

        void setNomeCargo(string novo_cargo_exercido){
            this->nome_cargo = novo_cargo_exercido;
        }

        float calcula_salarionovo(float percentual) {
            // Cálculo do novo salário a partir de porcentagem de aumento:

            return salario + (salario * percentual);
        }
    
        // Sobrescrita do método print      
        void print(){
            Pessoa::print();  // Chama o método da classe base
            cout << "\nDados Profissionais:" << endl;
            cout << "Salario: R$" << salario << " reais\n";
            cout << "Numero de matricula: " << numero_matricula << "\n";
            cout << "Cargo exercido: " << nome_cargo << "\n\n";
        }   
};