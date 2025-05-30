#include "Dispositivo.h"

// Contruct and destruct
Dispositivo::Dispositivo(float frequencia_passada, int numero_portas_usb_passadas){
  this->frequencia_processador = frequencia_passada;
  this->numero_portas_usb = numero_portas_usb_passadas;
}

 Dispositivo::~Dispositivo(){
   cout << "Removendo dispositivo da memória...\n";
 }

// Getters:
float Dispositivo::getFrequenciaProcessador(){
  return this->frequencia_processador;
}

int Dispositivo::getNumeroPortasUsb(){
  return this->numero_portas_usb;
}

int Dispositivo::getQuantidadeMemoriaSecundaria(){return this->quantidade_memoria_secundaria;}

//Setters:
void Dispositivo::setFrequenciaProcessador(float nova_frequencia){
  this->frequencia_processador = nova_frequencia;
}

void Dispositivo::setNumeroPortasUsb(int nova_quantidade){
  this->numero_portas_usb = nova_quantidade;
}

// Métodos abstratos:
void Dispositivo::exibirConfiguracoesDispositivo(){
  cout << "Dados genéricos do dispotivo:\n\n";
  cout << "Frequencia GHz -> " << this->getFrequenciaProcessador() << "\n";
  cout << "Numero de portas usb presentes -> " << this->getNumeroPortasUsb() << "\n";
  cout << "Quantidade de memória secundária -> " << this->quantidade_memoria_secundaria << "\n";
}

void Dispositivo::setQuantidadeMemoriaSecundaria(){
  if(this->getFrequenciaProcessador() > 5.7){
    this->quantidade_memoria_secundaria = 1;
  }
  else{
    this->quantidade_memoria_secundaria = 2;
  }
}
