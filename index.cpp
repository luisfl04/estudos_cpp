#include <iostream>

using namespace std;


int main(){

  int valores[10], iteracao;

  int tamanho =  sizeof(valores) / sizeof(valores[0]) ;

  // Lendo valores:
  for(iteracao = 0; iteracao < tamanho; iteracao++){
    cout << "Insira um valor -> ";
    cin >> valores[iteracao];
  }

  // Impimindo inverso:
  for

  while(condicao == 1){
    cout << "Insira um valor -> ";
    cin >> valor_lido;
    contagem_leitura++;
    soma_valores+=valor_lido;

    if(contagem_leitura == 3){
      int media_valores = soma_valores / contagem_leitura;
      cout << "Valor calculado = " << media_valores << endl;
      cout << "Deseja calcular uma nova média?\n1 - Sim\nQualquer outro valor - Não" << "\nDigite sua escolha -> ";
      cin >> condicao;
    }

  }
  return 1;
}
