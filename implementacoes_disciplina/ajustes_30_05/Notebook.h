#ifndef NOTEBOOK_H
#define NOTEBOOK_H
#include "Dispositivo.h" // Classe base

class Notebook : public Dispositivo{
private:
float polegadas_touchpad;

public:
// construct and destruct
Notebook(float frequencia_processador, int numero_portas_usb, float polegadas_touchpad_passadas);
~Notebook() override;

// getters:
float getPolegadas();

// Setters:
void setPolegadas(float novo_numero_polegadas);

// Métodos abstratos para implementação:
void exibirConfiguracoesDispositivo() override;
void definirQuantidadeMemoriaSecundaria() override;
};

#endif
