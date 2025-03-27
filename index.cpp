#include <iostream>
#include <random>


using namespace std;

int main(){
  string nome_funcionario, cargo_funcionario;
  double salario_base, salario_aumentado, diferenca_entre_salario, porcentagem_aumento;

  cout << "Olá, qual o seu nome?\nDigite aqui -> ";
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
  salario_aumentado = salario_base + (salario_base * porcentagem_aumento);
  cout << "\n\nO valor de seu salário com o aumento devido é -> " << salario_aumentado << endl;

  // calculando diferença:
  diferenca_entre_salario = salario_aumentado - salario_base;
  cout << "\n\n A diferença entre o seu salário base e o salário com aumento é -> " << diferenca_entre_salario << endl;

  return 0;
}
