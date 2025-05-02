// libs:
#include <iostream>
#include <vector>
#include <string>
using namespace std;


class Aluno{
    // Classe básica que representa um objeto "Aluno".
    
    private:
      string nome;
      char turma_cursada;
      int idade;
      string cpf;
      string nome_responsavel;
      int matricula;
    
    public:
      // Construtor:
      Aluno(string nome_passado = "Indefinido", int idade_passada = 0, string cpf_passado = "000.000.000.00"){
        nome = nome_passado;
        idade = idade_passada;
        cpf = cpf_passado; 
      }
    
      ~Aluno(){
        cout << "Destruindo objeto...";
      }
    
      // Getters:
      string getNome(){
        return nome;
      }
    
      char getTurma(){
          return turma_cursada;
      }
    
      int getIdade(){
        return idade;
      }
    
      string getCPF(){
        return cpf;
      }

      string getNomeResponsavel(){
        return nome_responsavel;
      }
    
      int getMatricula(){
        return matricula;
      }
    
      // Setters:
      void setNome(string novo_nome){
        nome = novo_nome;
    }
    
      void setTurma(char nova_turma){
        turma_cursada = nova_turma;
      }
    
      void setIdade(int nova_idade){
        idade = nova_idade;
      }
    
      void setCPF(string novo_cpf){
        cpf = novo_cpf;
      }
      
      void setNomeResponsavel(string nome_passado){
        nome_responsavel = nome_passado;
      }

      void setMatricula(int nova_matricula){
        matricula = nova_matricula;
      }
    
      // Exibição:
      void toString(){
        cout << "Informações do funcionário:" << "\n\n";
        cout << "Nome -> " << getNome() << "\n";
        cout << "Turma -> " << getTurma() << "\n";
        cout << "Idade -> " << getIdade() << "\n";
        cout << "CPF -> " << getCPF() << "\n";
        cout << "Nome do responsável -> " << getNomeResponsavel() << "\n";
        cout << "Numero de Matricula -> " << getMatricula() << "\n";
      }
    };
    
class Turma{
    
private:
    char sigla;
    int quantidade_alunos;    
    int sala_ocupada;
    string professora_titular;
    Aluno alunos_matriculados[20];

public:

    // Contruct:
    Turma(char sigla_turma, int numero_sala, string nome_professora){
        sigla = sigla_turma;
        quantidade_alunos = 0;
        sala_ocupada = numero_sala;
        professora_titular = nome_professora;
    }

    // Destruct:
    ~Turma(){
        cout << "Destruindo objeto 'Turma' ";
    };

    // Getters:
    char getSigla(){
        return sigla;
    }

    int getQuantidadeAlunos(){
        return quantidade_alunos;
    }

    int getSalaOcupada(){
        return sala_ocupada;
    }

    string getProfessoraTurma(){
        return professora_titular;
    }

    Aluno getAluno(int indice_aluno){
        return alunos_matriculados[indice_aluno];
    }

    // Setters:
    void setSigla(char nova_sigla_turma){
        sigla = nova_sigla_turma;
    }

    void setQuantidadeAlunos(string acao_requisitada){
        if(acao_requisitada == "incrementar"){
            quantidade_alunos++;
        }
        else if(acao_requisitada == "decrementar"){
            quantidade_alunos--;
        }
        else{
            cout << "A ação passada por parâmetro está errada. Verifique e tente novamente.";
        }
    }

    void setSalaOcupada(int novo_numero_sala){
        sala_ocupada = novo_numero_sala;
    }

    void setProfessoraTurma(string nome_nova_professora){
        professora_titular = nome_nova_professora;
    }

    void setAlunoTurma(int indice_aluno){
        // Método que mudará os atributos da classe 'Aluno' a partir desta classe.
    }

    // classes amigas:
    friend class Aluno;
};  


int main(){
    Aluno aluno_um;
    aluno_um.toString();

}