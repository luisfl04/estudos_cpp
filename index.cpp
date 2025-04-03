#include <iostream>
#include <random>

using namespace std;

struct Funcionario{
  string nome_funcionario, cargo_funcionario;
  double salario_base, salario_aumentado;
};

double calcularPorcentagemAumento(string cargo){
    /* Função que verifica e retorno um valor de porcentagem de acordo com o cargo passado.*/

    if(cargo == "gerente"){
        return 0.10;
    }
    else if (cargo == "engenheiro"){
      return 0.20;
    }
    else if(cargo == "programador"){
      return 0.50;
    }
    else{
      return 0.40;
    }

}

double calcularAumentoSalario(double salario_base, double porcentagem_aumento){
  // Calculando o salário com aumento:
  return salario_base + (salario_base * porcentagem_aumento);
}

double calcularDiferencaEntreSalario(double salario_base, double salario_aumentado){
  return salario_base - salario_aumentado;
}

int main(){
    Funcionario funcionario[10];

    // 4* Implementação do calculo de salario de funcionarios usando struct:

    double diferenca_entre_salario, porcentagem_aumento;
    int condicao_parada, indice_funcionario_atual = 0;

    do{
      // Obtendo nome e cargo do funcionario:
      cout << "\n# Calculo do funcionario " << indice_funcionario_atual + 1 << "\n\nOla, qual o seu nome?\nDigite aqui -> ";
      cin >> funcionario[indice_funcionario_atual].nome_funcionario;

      cout << "\n\nQual o seu cargo?\nDigite aqui -> ";
      cin >> funcionario[indice_funcionario_atual].cargo_funcionario;

      // Obtendo a porcentagem de aumento com base no cargo:
      double porcentagem_aumento = calcularPorcentagemAumento(funcionario[indice_funcionario_atual].cargo_funcionario);

      // Obtendo o salário base:
      cout << "\n\nCerto, agora me diga o seu salario base.\nDigite aqui -> ";
      cin >> funcionario[indice_funcionario_atual].salario_base;

      // Calculando salário com aumento:
      funcionario[indice_funcionario_atual].salario_aumentado = calcularAumentoSalario(funcionario[indice_funcionario_atual].salario_base, porcentagem_aumento);
      cout << "O valor de seu salario com o aumento devido eh -> " << funcionario[indice_funcionario_atual].salario_aumentado;

      // calculando diferença:
      diferenca_entre_salario = calcularDiferencaEntreSalario(funcionario[indice_funcionario_atual].salario_aumentado, funcionario[indice_funcionario_atual].salario_base);
      cout << "\n\nA diferenca entre o seu salario base e o salario com aumento eh -> " << diferenca_entre_salario << endl;

      // Verificando se usuário deseja prosseguir com o cálculo:
      cout << "\n\nDeseja calcular um novo salario?\n1 - Sim -- 0 - Nao\nDigite aqui -> ";
      cin >> condicao_parada;
      cout << "Condicao de parada passada -> " << condicao_parada << endl;
      while(condicao_parada != 0 && condicao_parada != 1){
        cout << "\nO valor " << condicao_parada << " Nao eh um valor de escolha valido!\nDigite novamente aqui -> ";
        cin >> condicao_parada;
      }

      // Incrementando índice
      indice_funcionario_atual++;
    }while(condicao_parada == 1 && indice_funcionario_atual < 10);

    // Imprimindo dados armazenados após os calculos:
    for(int i = 0; i < indice_funcionario_atual; i++){
        cout << "\nDados do funcionario " << i + 1 << ":";
        cout << "\nNome -> " << funcionario[i].nome_funcionario;
        cout << "\nCargo -> " << funcionario[i].cargo_funcionario;
        cout << "\nSalario base -> " << funcionario[i].salario_base;
        cout << "\nSalario aumentado -> " << funcionario[i].salario_aumentado;
        cout << "\n";
    }

    // Calculando o numero de gerentes, programadores e engenheiros na empresa:
    int quantidade_engenheiros = 0, quantidade_programadores = 0, quantidade_gerentes = 0, quantidade_cargo_desconhecido = 0;
    for(int i = 0; i < indice_funcionario_atual; i++){
      if(funcionario[indice_funcionario_atual].cargo_funcionario == "engenheiro"){
        quantidade_engenheiros++;
      }
      else if(funcionario[indice_funcionario_atual].cargo_funcionario == "programador"){
        quantidade_programadores++;
      }
      else if(funcionario[indice_funcionario_atual].cargo_funcionario == "gerente"){
        quantidade_gerentes++;
      }
      else{
        quantidade_cargo_desconhecido++;
      }
    }

    cout << "Numero de engenheiros na empresa -> " << quantidade_engenheiros;
    cout << "\nNumero de programadores na empresa ->  " << quantidade_programadores;
    cout << "\nNumero de gerentes -> " << quantidade_gerentes;
    cout << "\nQuantidade de cargos desconhecidos -> " << quantidade_cargo_desconhecido;

    // Calculando custo geral antes e depois dos aumentos calculados:
    double valor_geral_base = 0.0, valor_geral_aumentado = 0.0;
    cout << "Indice de funcionarios cadastrados antes de fazer o calculo dos gastos da empresa -> " << indice_funcionario_atual;
    for(int i = 0; i < indice_funcionario_atual; i++){
        valor_geral_base = valor_geral_base + funcionario[indice_funcionario_atual].salario_base;
        valor_geral_aumentado = valor_geral_base + funcionario[indice_funcionario_atual].salario_aumentado;
    }

    // Mostrando o valor dos salários:
    cout << "Custo de salario base para a empresa -> " << valor_geral_base;
    cout << "\nCusto de salario apos os aumentados -> " << valor_geral_aumentado;

  return 0;
}
