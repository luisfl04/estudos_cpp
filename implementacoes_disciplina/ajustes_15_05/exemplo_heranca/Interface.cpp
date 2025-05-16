// Libs:
#include <iostream>
#include <string>
#include <cstdlib>
#include "Funcionario.cpp"
using namespace std;


class Interface{

public:
    
    void limparTerminal(){
        // Limpa as informações do terminal
        #ifdef _WIN32
          system("cls");
        #else
          system("clear");
        #endif
    }

    void getMensagemBoasVindas(){
        cout << "Ola, seja bem vindo ao administrador de Funcionarios da empresa.\n\n\n";
    } 

    void getTextoMenu(){
        cout << "Escolha uma das opcoes abaixo:\n\n";
        cout << "1 - cadastrar novo usuario\n";
        cout << "0 - Finalizar programa\n";
    }

    void verificarValorNumericoEscolhido(int escolha_feita){
        while(escolha_feita < 0){
            cout << "O valor de escolha informado eh invalido\nInsira novamente -> ";
            cin >> escolha_feita;
        }
    }

    void redirecionarBaseadoEscolha(int escolha_feita){
        switch (escolha_feita)
        {
        case 1:
            this->cadastrarFuncionario();
            break;
        
        default:
            break;
        }
    }


    int setOpcaoUsuario(){
        int escolha_feita;
        cout << "\nDigite sua escolha -> ";
        cin >> escolha_feita;
        this->verificarValorNumericoEscolhido(escolha_feita);
        return escolha_feita;
    }


    void menuInterativo(){
        int opcao_escolhida = -1; // Variável de controle da opção de escolha do usuário.
        while (true){ 
            // Imprimindo mensagens de boas vindas.
            // this->limparTerminal();
            this->getMensagemBoasVindas();
            this->getTextoMenu();

            // Obtendo a escolha do menu:
            opcao_escolhida = this->setOpcaoUsuario();

            // Verificando se usuário finalizou programa:
            this->verificarFinalizacaoPrograma(opcao_escolhida);

            // Redirecionando com base na escolha:
            this->redirecionarBaseadoEscolha(opcao_escolhida);
        }
    }


    void cadastrarFuncionario(){
        /* Obtém informações e cria intância da classe 'Funcionário' com base nas mesmas.   
           Após o cadastro, exibi as informações na tela. 
        */

        limparTerminal();
    
        // Variáveis para armazenamento das infos:
        string nome, cpf, nome_cargo;
        int idade, matricula;
        float salario;

        // Obtendo infos:
        cout << "Informe seu nome -> ";
        cin >> nome;

        cout << "\nSua idade -> ";
        cin >> idade;

        cout << "Seu CPF -> ";
        cin >> cpf;

        cout << "Salario Recebido -> R$";
        cin >> salario;

        cout << "Numero de matricula na empresa -> ";
        cin >> matricula;

        cout << "Cargo exercido -> ";
        cin >> nome_cargo;

        // Criando instância com base nas infos:
        Funcionario funcionario_criado(nome, idade, cpf, salario, matricula, nome_cargo);

        // Printando informações:
        funcionario_criado.print();
    }       

    void verificarFinalizacaoPrograma(int opacao_escolhida){
        if(opacao_escolhida == 0){
            cout << "Programa finalizado!";
            exit(-1);
        }
    }


};


// Chamando menu da interface:
int main(){
    Interface interface_programa;
    interface_programa.menuInterativo();
    return  0;
}


