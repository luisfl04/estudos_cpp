#include "Professor.h"

// Construct:
Professor::Professor(const string nome, const string matricula, int idade){
    setNome(nome);
    setMatricula(matricula);
    setIdade(idade);
}

// Getters:
int Professor::getIdade(){
    return idade;
}

string Professor::getNome(){
    return nome;
}

string Professor::getMatricula(){
    return matricula;
}

// Setters:
void Professor::setNome(string novo_nome){
    nome = novo_nome;
}

void Professor::setIdade(int nova_idade){
    idade = nova_idade;
}

void Professor::setMatricula(string nova_matricula){
    matricula = nova_matricula;
}







