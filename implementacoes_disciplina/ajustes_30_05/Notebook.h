#ifndef NOTEBOOK_H
#define NOTEBOOK_H
##include "Dispositivo.h" // Classe base

class Notebook : public Dispositivo{
private:
float polegadas_touchpad;

public:
// construct and destruct
Notebook();
~Notebook();

// getters:
float getPolegadas();

// Setters:
void setPolegadas();




}






#enfif
