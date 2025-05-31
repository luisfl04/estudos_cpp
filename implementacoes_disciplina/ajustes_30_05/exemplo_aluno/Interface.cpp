#include "Turma.h"

int main(){

  Turma* minha_turma = new Turma("insider");
  minha_turma->cadastrarAluno();
  minha_turma->obterMediaTurma();
  minha_turma->obterAlunosAcimaMedia();
  return 1;
}
