// libs:
#include <iostream>
#include <string>
using namespace std;

// Enum com os tipos de cabelo que o objeto pode ter:
enum TipoCabelo {Indefinido, Loiro, Castanho, Branco, Preto, Ruivo};

// Classe que irá obter o tipo de cabelo:
class Pessoa{
private:
  string nome;
  TipoCabelo cabelo;
public:
  // Getters:
  string getNome(){
    return nome;
  }

  TipoCabelo getCabelo(){
    return cabelo;
  }

  // Setters:
  void setNome(string novo_nome){
    nome = novo_nome;
  }

  void setCabelo(TipoCabelo novo_tipo_cabelo){
    cabelo = novo_tipo_cabelo;
  }

  void toString(){
    cout << "Informações do objeto:\n\n";
    cout << "Nome -> " << nome << "\n";
    cout << "Tipo de cabelo -> " << getTipoCabeloTexto(cabelo) << "\n";
  }

  // Função que retorna o valor textual do 'cabelo' de acordo com o índice no enum:
  string getTipoCabeloTexto(TipoCabelo indice_tipo){
    // Array com os textos:
    const char* nome_cabelo[] = {"Indefinido", "Loiro", "Castanho", "Branco", "Preto", "Ruivo"};
    return nome_cabelo[indice_tipo];
  }

};
