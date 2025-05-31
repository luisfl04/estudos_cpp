#include "Notebook.h"
#include <vector>


class Interface{
private:
vector<Notebook*> estoque_notebooks;

public:
  void cadastrarNotebook(){
    float frequencia_processador, quantidade_polegadas_touchpad;
    int numero_portas_usb;

    cout << "CADASTRO DE NOTEBOOKS:\n\n";

    cout << "Indique a frequencia do processador do notebook -> ";
    cin >> frequencia_processador;

    cout << "\nIndique a quantidade de portas usb -> ";
    cin >> numero_portas_usb;

    cout << "\nQuantas polegadas o touchpad possui -> ";
    cin >> quantidade_polegadas_touchpad;

    Notebook* novo_notebook = new Notebook(frequencia_processador, numero_portas_usb, quantidade_polegadas_touchpad);
    novo_notebook->definirQuantidadeMemoriaSecundaria();
    this->estoque_notebooks.push_back(novo_notebook);

    cout << "\nNotebook cadastrado com sucesso!\n";
  }

  void exibirInformacoesNotebooks(){
    cout << "NOTEBOOKS CADASTRADOS:\n\n";
    for(size_t indice_notebook_atual = 0; indice_notebook_atual < estoque_notebooks.size(); indice_notebook_atual++){
      estoque_notebooks[indice_notebook_atual]->exibirConfiguracoesDispositivo();
    }
  }

  void liberarMemoriaNotebooks(){
    for(size_t notebook_atual = 0; notebook_atual < estoque_notebooks.size(); notebook_atual++){
      delete estoque_notebooks[notebook_atual];
    }
    cout << "Memória liberada!\n";
  }

};

int main(){
  Interface interface_programa;
  interface_programa.cadastrarNotebook();
  interface_programa.exibirInformacoesNotebooks();
  interface_programa.liberarMemoriaNotebooks();
}
