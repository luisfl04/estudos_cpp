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
  for(iteracao = tamanho -1; iteracao >= 0; iteracao--){
      cout << valores[iteracao] << "\n";
      if(valores[iteracao] < 0){
        cout << "ERRO -> VALOR NEGATIVO!";
        break;
      }
  }

  return 1;
}
