#include "Aluno.h"
using namespace std;

Aluno::Aluno(int numero_matricula = 0, string nome_aluno = "Indefinido"){
    this->matricula = numero_matricula;
    this->nome = nome_aluno;
}

Aluno::Aluno(){
    this->matricula = 0;
    this->nome = "Indefinido";
}

Aluno::~Aluno(){
    cout << "Detruindo objeto aluno de nome -> " << this->nome << "\n";
}

int Aluno::getMatricula(){
    return this->matricula;
}

string  Aluno::getNome(){
    return this->nome;
}

float Aluno::getMediaNotas(){
    return (this->notas[0] + this->notas[1] + this->notas[2]) / 3;
}
    
float Aluno::getNota(int numero_nota){
    return this->notas[numero_nota];
}

void Aluno::setMatricula(int novo_numero_matricula){
    this->matricula = novo_numero_matricula;
}

void Aluno::setNome(string novo_nome){
    this->nome = novo_nome;
}

void Aluno::setNota(int numero_nota, float nova_nota){
    this->notas[numero_nota] = nova_nota;
} 