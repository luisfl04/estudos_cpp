#include <iostream>
#include <random>


using namespace std;

int main(){

  int quantidade_calculos;
  cout << "Ola, quantos salarios de funcionarios de sua empresa voce quer calcular hoje?\nDigite aqui -> ";
  cin >> quantidade_calculos;

  // Verificando se usuário digitou um número válido:
  while (quantidade_calculos <= 0){
      cout << quantidade_calculos << " nao eh um numero valido\nDigite um novo numero aqui -> ";
      cin >> quantidade_calculos;
  }

  // Calculando os salários:
  for(int i = 0; i < quantidade_calculos; i++){
    cout << "\n# Calculo de salario do funcionario " << i + 1;

    string nome_funcionario, cargo_funcionario;
    double salario_base, salario_aumentado, diferenca_entre_salario;
    int porcentagem_aumento;

    cout << "\nOlá, qual o seu nome?\nDigite aqui -> ";
    cin >> nome_funcionario;

    cout << "\n\nQual o seu cargo?\nDigite aqui -> ";
    cin >> cargo_funcionario;

    // Obtendo o valor de porcentagem do aumento:
    if(cargo_funcionario == "gerente"){
        porcentagem_aumento = 0.10;
    }
    else if (cargo_funcionario == "engenheiro"){
      porcentagem_aumento = 0.20;
    }
    else if(cargo_funcionario == "programador"){
      porcentagem_aumento = 0.50;
    }
    else{
      porcentagem_aumento = 0.40;
    }

    // Obtendo o salário base:
    cout << "\n\nCerto, agora me diga o seu salário base.\nDigite aqui -> ";
    cin >> salario_base;

    // Calculando salário com aumento:
    salario_aumentado = salario_aumentado + (salario_base * porcentagem_aumento);
    cout << "O valor de seu salário com o aumento devido é -> " << salario_aumentado << endl;

    // calculando diferença:
    diferenca_entre_salario = salario_aumentado - salario_base;
    cout << "\n\n A diferença entre o seu salário base e o salário com aumento é -> " << diferenca_entre_salario << endl;
  }

  return 0;
}
