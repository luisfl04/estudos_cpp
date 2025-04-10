#include <iostream>
#include <string>
using namespace std;


// Implementação da classe "Aluno":
class Aluno{
private:
  // atributos:
  string nome;
  string nome_responsavel;
  int idade;
  long cpf;
  int codigo_turma;

public:
  // Construtor:
  Aluno(string nome_aluno = "", int idade_aluno = 0, int codigo_turma_aluno = 0)
  : nome(nome_aluno), idade(idade_aluno), codigo_turma(codigo_turma_aluno) {}

  // Getters:
  string getNome(){
    return nome;
  }

  string getNomeResponsavel(){
    return nome_responsavel;
  }

  int getIdade(){
    return idade;
  }

  long getCpf(){
    return cpf;
  }

  int getCodigoTurma(){
    return codigo_turma;
  }

  // Setters:
  void setNome(string novo_nome){
    nome = novo_nome;
  }

  void setNomeResponsavel(string novo_nome_responsavel){
    nome = novo_nome_responsavel;
  }

  void setIdade(int nova_idade){
    idade = nova_idade;
  }

  void setCpf(long novo_cpf){
    cpf = novo_cpf;
  }

  void setCodigoTurma(char nova_sigla){
    codigo_turma = nova_sigla;
  }

  void toString(){
    /* Método que renderiza as informações do objeto */
    cout << "Informações do Aluno:\n\n";
    cout << "Nome -> " << getNome() << "\n";
    cout << "Idade -> " << getIdade() << "\n";
    cout << "CPF cadastrado -> " << getCpf() << "\n";
    cout << "Turma -> " << getCodigoTurma() << "\n";
    cout << "Nome do responsável -> " << getNomeResponsavel() << "\n";
  }

};
