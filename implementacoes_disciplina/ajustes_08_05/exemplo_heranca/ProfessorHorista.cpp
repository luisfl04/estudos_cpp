// Libs:
#include <iostream>
#include <string>
#include "Professor.h"

using std::string;

class ProfessorHorista : public Professor{
    private:
    int total_horas;
    float valor_salario_hora;

    public:
    ProfessorHorista(const string nome_passado, const string matricula_passada, int idade_passada,
    int total_horas_informada, float valor_salario_hora_informado
    ): Professor(nome_passado, matricula_passada, idade_passada){
        total_horas = total_horas_informada;
        valor_salario_hora = valor_salario_hora_informado; 
    }

    // Getters:
    int getTotalHoras(){
        return total_horas;
    }

    float getValorSalarioHora(){
        return valor_salario_hora;
    }

    // Setters:
    void setTotalHoras(int novo_total_horas){
        total_horas = novo_total_horas;
    }

    void setValorSalarioHora(float novo_valor_salario_hora){
        valor_salario_hora = novo_valor_salario_hora;
    }

};
