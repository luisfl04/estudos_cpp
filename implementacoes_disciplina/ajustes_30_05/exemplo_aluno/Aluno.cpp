#include "Aluno.h"

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

float Aluno::getNota(int numero_nota){
  return this->notas[numero_nota];
}

float Aluno::getMediaNotas(){
  return this->media_notas;
}

void Aluno::setMediaNotas(){
    this->media_notas =  (this->notas[0] + this->notas[1] + this->notas[2]) / 3;
}

void Aluno::setMatricula(int novo_numero_matricula){
    this->matricula = novo_numero_matricula;
}

void Aluno::setNome(string novo_nome){
    this->nome = novo_nome;
}

void Aluno::setNotas(float primeira_nota, float segunda_nota, float terceira_nota){
    this->notas[0] = primeira_nota;
    this->notas[1] = segunda_nota;
    this->notas[2] = terceira_nota;
    this->setMediaNotas();
}

void Aluno::setNotaEspecifica(int numero_nota, float valor_nota){
  this->notas[numero_nota] = valor_nota;
}
