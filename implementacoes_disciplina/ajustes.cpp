// libs:
#include <iostream>
#include <vector>
using namespace std;


class Funcionario{
// Classe usada na implementação dos métodos:

private:
  string nome;
  int idade;
  double salario;
  string cargo;

public:

  // Construtor:
  Funcionario(string nome_passado, string cargo_passado, int idade_passada, double salario_passado){
    nome = "Desconhecido";
    idade = 0;
    salario = 0.0;
    cargo = "Indefinido";
  }

  // Getters:
  string getNome(){
    return nome;
  }

  string getCargo(){
      return cargo;
  }

  int getIdade(){
    return idade;
  }

  double getSalario(){
    return salario;
  }

  // Setters:
  void setNome(string novo_nome){
    nome = novo_nome;
  }

  void setIdade(int nova_idade){
    idade = nova_idade;
  }

  void setSalario(double novo_salario){
    salario = novo_salario;
  }

  void setCargo(string novo_cargo){
    cargo = novo_cargo;
  }

  // Exibição:
  void toString(){
    cout << "Informações do funcionário:" << "\n\n";
    cout << "Nome -> " << getNome() << "\n";
    cout << "Idade -> " << getIdade() << "\n";
    cout << "cargo -> " << getCargo() << "\n";
    cout << "salario -> " << getSalario() << "\n";
  }

  // Declarações de protótipos de métodos:
  void definirAumentoSalario(double porcentagem_aumento);
  void calcularSalarioAumentadoArray();
  void exibirCustoSalario();
  void exibirQuantidadeGerenteEngenheiro();
  definirInformacoesFuncionario();

};

void Funcionario::definirAumentoSalario(double porcentagem_aumento){
  /* Método que calcula o novo salário do funcionário de acordo com a porcentagem de aumento.
  O valor com o aumento é definido como o salário do funcionario. */
  double salario_aumentado = salario + (salario * porcentagem_aumento);
  setSalario(salario_aumentado);
}

void Funcionario::calcularSalarioAumentadoArray(){
  // Basicamente calcula o salário com aumento de determinado funcionário usando a estrutura vector.

  // Determinando vetor:
  vector<Funcionario> grupo_funcionarios;

  // Criando determinado funcionário:
  grupo_funcionarios.push_back(Funcionario("Maria Jose", "programador", 20, 1200.98));

  // Calculando o aumento do funcionário no array:
  for(Funcionario& funcionario_exemplo : grupo_funcionarios){
    funcionario_exemplo.definirAumentoSalario(0.40);
    cout << "O salario de " << funcionario_exemplo.getNome() << " é -> " << funcionario_exemplo.getSalario() << "\n";
  }
}

void Funcionario::exibirCustoSalario(){
  /* A partir de um array de funcionário, calcula o custo total do salário dos mesmos. */

  // Determinando vetor:
  vector<Funcionario> grupo_funcionarios;

  // Criando determinado grupo de funcionários de forma dinâmica:
  grupo_funcionarios.push_back(Funcionario("Maria Jose", "programador", 20, 1200.98));
  grupo_funcionarios.push_back(Funcionario("Alexandre Andrade", "Técnico de Suporte", 24, 1390));
  grupo_funcionarios.push_back(Funcionario("Pedro Henrique", "Enfermeiro", 29, 1200.98));
  grupo_funcionarios.push_back(Funcionario("Jose Audício", "GERENTE", 40, 7200.98));

  // Calculando o salário dos funcionários do vetor:
  for(Funcionario& funcionario_atual : grupo_funcionarios){
    funcionario_atual.definirAumentoSalario(0.30); // 30% de aumento para todos os tipos.
  }

  // Calculando o custo total dos salários:
  double custoTotalSalario = 0.0;
  for(Funcionario& funcionario_atual : grupo_funcionarios){
    custoTotalSalario += funcionario_atual.getSalario();
  }

  // Exibindo o custo total:
  cout << "O custo total dos salários é -> " << custoTotalSalario << endl;
}

void Funcionario::exibirQuantidadeGerenteEngenheiro(){
  /* Método ilustrativo que calcularia o número de engenheiros e gerentes presentes em determinado
  array de acordo com o valor do atributo 'cargo'. */

  // Variáveis que obterão as quantidades:
  int quantidade_engenheiros = 0, quantidade_gerentes = 0, cargo_desconhecido = 0;

  // Determinando array de funcionários:
  // Determinando vetor:
  vector<Funcionario> grupo_funcionarios;

  // Criando determinado grupo de funcionários de forma dinâmica:
  grupo_funcionarios.push_back(Funcionario("Maria Jose", "gerente", 20, 1200.98));
  grupo_funcionarios.push_back(Funcionario("Alexandre Andrade", "engenheiro", 24, 1390));
  grupo_funcionarios.push_back(Funcionario("Pedro Henrique", "engenheiro", 29, 1200.98));
  grupo_funcionarios.push_back(Funcionario("Jose Audício", "gerente", 40, 7200.98));

  // Calculando as quantidades:
  for(Funcionario& funcionario_atual : grupo_funcionarios){
    if(funcionario_atual.cargo == "engenheiro"){
      quantidade_engenheiros++;
    }
    else if(funcionario_atual.cargo == "gerente"){
      quantidade_gerentes++;
    }
    else{
      cargo_desconhecido++;
    }
  }

  // Exibindo quantidades:
  cout << "Quantidade de engenheiros -> " << quantidade_engenheiros << "\n";
  cout << "Quantidade de gerentes -> " << quantidade_gerentes << "\n";
  cout << "Quantidade de cargos desconhecidos encontrados -> " << cargo_desconhecido << "\n";
}

void Funcionario::definirInformacoesFuncionario(){
  /* Método que obtém dados do usuário via teclado e define na instância da classe e define usando os
  métodos SET definidos na classe: */

  // Variáveis auxiliares que irão armazenar as informações de forma temporária para definir na classe.
  string nome_funcionario;
  double salario_funcionario;
  int idade_funcionario;
  string cargo_funcionario;

  // Obtendo valores:
  cout << "Digite o nome do funcionario -> ";
  cin >> nome_funcionario;
  cout << "\nInforme sua idade -> ";
  cin >> idade_funcionario;
  cout << "\nInforme o cargo que você exerce na empresa -> ";
  cin >> cargo_funcionario;
  verificarCargoFuncionario(cargo_funcionario);
  cout << "\nDigite o seu salário -> ";
  cin >> salario_funcionario;

  // Definindo os valores na classe:
  double salario_calculado_funcionario = calcularSalarioFuncionario(salario_funcionario, cargo_funcionario);
  setSalario(salario_calculado_funcionario);
  setNome(nome_funcionario);
  setIdade(idade_funcionario);

  cout << "\nDados definidos com sucesso!";
}


int main(){
  Funcionario funcionario_exemplo;
  funcionario_exemplo.definirInformacoesFuncionario();
  funcionario_exemplo.toString();

  return 0;
}
