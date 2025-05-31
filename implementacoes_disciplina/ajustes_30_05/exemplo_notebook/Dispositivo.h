#ifndef DISPOSITIVO_H
#define DISPOSITIVO_H
#include <iostream>
using namespace std;

class Dispositivo{
private:
float frequencia_processador;
int numero_portas_usb;
int quantidade_memoria_secundaria;

public:
// Contruct and destruct
Dispositivo(float frequencia_passada, int numero_portas_usb_passadas);
virtual ~Dispositivo();

// Getters:
float getFrequenciaProcessador();
int getNumeroPortasUsb();
int getQuantidadeMemoriaSecundaria();

//Setters:
void setFrequenciaProcessador(float nova_frequencia);
void setNumeroPortasUsb(int nova_quantidade);
void setMemoriaSecundaria(float nova_quantidade);

// Métodos abstratos:
virtual void exibirConfiguracoesDispositivo();
virtual void definirQuantidadeMemoriaSecundaria();
};

#endif
