// libs:
#include <iostream>
#include <string>
using namespace std;
#include "Aluno.cpp"
#include <cstdlib>
#include <unistd.h>


class Turma{
  /* Esta classe armazenará um array de objetos do tipo 'Aluno' para ilustrar a construção de uma turma. */

private:
  // atributos:
  Aluno alunos_cadastrados[40];
  string nome_turma;
  int quantidade_alunos_matriculados;

public:
  // Construtor:
  Turma(string nome_turma_informada){
    nome_turma = nome_turma_informada;
    quantidade_alunos_matriculados = 0; // Controle de alunos relacionados a turma.
  }

  ~Turma(){
    cout << "Destruindo objeto turma";
  }

  // Getters:
  string getNomeTurma(){
    return nome_turma;
  }

  // Setters:
  void setNomeTurma(string novo_nome_turma){
    nome_turma = novo_nome_turma;
  }

  // toString:
  void toString(){
    cout << "Informações da turma " << getNomeTurma() << "\n\n";

    // Loop que percorrerá todos os objetos 'Aluno' e renderizar as suas informações:
    for(int i = 0; i < quantidade_alunos_matriculados; i++){
      cout << "# Aluno " << i + 1 << ":\n\n";
      cout << "Nome -> " << alunos_cadastrados[i].getNome();
      cout << "Idade -> " << alunos_cadastrados[i].getIdade();
      cout << "CPF -> " << alunos_cadastrados[i].getCpf();
      cout << "Nome do responsável ->" << alunos_cadastrados[i].getNomeResponsavel();
      cout << "\n\n";
    }

  }

  // Funções de manipulação:

  void limparTerminal(){
    // Limpa as informações do terminal

    #ifdef _WIN32
      system("cls");
    #else
      system("clear");
    #endif
  }

  void fecharPrograma(){
    cout << "Fechando o programa...";
    limparTerminal();
    sleep(3);
  }


  void getMenuOpcoes(){
    /* Método que renderiza as opções de interação do usuário e chama os métodos
    correspondentes a cada opção. */

    limparTerminal();

    // Inicialização das variáveis:
    int escolha_usuario;

    // Menu em loop:
    do{
      // Renderizando menu:
      cout << "Olá, esse é o menu administrador da turma " << getNomeTurma() << "\n\n";
      cout << "Escolha uma das opções abaixo:\n";
      cout << "(1) - Para cadastrar um novo aluno na turma\n";
      cout << "(2) - Para visualizar os alunos cadastrados\n";
      cout << "(0) - Para fechar o menu\n";
      cout << "Digite sua escolha aqui -> ";
      cin >> escolha_usuario;

      // Verificando se a escolha do usuária foi válida:
      while(escolha_usuario < 0 || escolha_usuario > 2){
        cout << "O valor de escolha digitado não é válido!\nInsira novamente -> ";
        cin >> escolha_usuario;
      }

      // Chamando função com base na escolha:
      if(escolha_usuario == 1){
        adicionarAlunoTurma();
      }
      else if(escolha_usuario == 2){
        toString();
      }
      else{
        fecharPrograma();
      }

    } while(escolha_usuario == 1 || escolha_usuario == 2);

  }


  void adicionarAlunoTurma(){
    /* Método que cria objetos 'Aluno' e os relaciona à turma de acordo com os valores
    passados pelo usuário */

    limparTerminal();

    // Variáveis que irão receber os valores que serão usados na criação do objeto:
    string nome_aluno;
    int idade_aluno;
    int codigo_turma = quantidade_alunos_matriculados + 1;
    string nome_responsavel;
    long cpf_aluno;

    cout << "Adicionar Aluno na turma " << getNomeTurma() << "\n\n";
    cout << "Informe o nome do aluno -> ";
    cin >> nome_aluno;

    cout << "\nInforme a idade do aluno -> ";
    cin >> idade_aluno;

    // Com essas infos, já consigo inicializar o objeto:
    Aluno aluno_criado(nome_aluno, idade_aluno, codigo_turma);

    // Obtendo informações complementares:
    cout << "\nInforme o CPF do aluno -> ";
    cin >> cpf_aluno;

    cout << "\nInforme o nome do responsável pelo aluno -> ";
    cin >> nome_responsavel;

    // Cadastrando informações adicionais:
    aluno_criado.setCpf(cpf_aluno);
    aluno_criado.setNomeResponsavel(nome_responsavel);

    // Cadastrando o objeto 'Aluno' criado no array de objetos que armazena os alunos:
    alunos_cadastrados[quantidade_alunos_matriculados] = aluno_criado;
    quantidade_alunos_matriculados++;

    limparTerminal();
    cout << "Aluno Criado com sucesso! Aguarde...\n\n";
    sleep(3);
  }



};
