#include "Notebook.h"

// construct and destruct
Notebook::Notebook(float frequencia_passada, int numero_portas_usb_passadas, float polegadas_touchpad_passadas) :
Dispositivo(frequencia_passada, numero_portas_usb_passadas){
  this->polegadas_touchpad = polegadas_touchpad_passadas;
}

Notebook::~Notebook(){
  cout << "Destruindo objeto notebook...\n";
}

// getters:
float Notebook::getPolegadas(){
  return this->polegadas_touchpad;
}

// Setters:
void Notebook::setPolegadas(float novo_numero_polegadas){
  this->polegadas_touchpad = novo_numero_polegadas;
}

// Métodos abstratos para implementação:
void Notebook::exibirConfiguracoesDispositivo(){
  Dispositivo::exibirConfiguracoesDispositivo();
  cout << "quantidade polegadas ->  " << this->getPolegadas() << "\n";
}

void Notebook::definirQuantidadeMemoriaSecundaria(){
  float quantidade_memoria_informada;
  cout << "\ninforme a quantidade de memoria de seu dispositivo -> ";
  cin >> quantidade_memoria_informada;
  this->setMemoriaSecundaria(quantidade_memoria_informada);
}
