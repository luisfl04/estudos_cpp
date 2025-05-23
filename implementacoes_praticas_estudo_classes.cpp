// Libs:
#include <iostream>
using namespace std;


// 1) Definição da classe Retangulo, com seu métodos de calculo de area e perímetro:
class Retangulo{
  private:
  double altura;
  double largura;

  public:
  Retangulo(double altura, double largura){
    this->altura = altura;
    this->largura = largura;
  }

  // Getters:
  double getAltura(){
    return altura;
  }
  double getLargura(){
    return largura;
  }

  // Setters:
  void setAltura(double altura){
    this->altura = altura;
  }
  void setLargura(double largura){
    this->largura = largura;
  }

  // Metodos de cálculo:
  double calcularArea(){
    return this->altura * this->largura;
  }

  double calcularPerimetro(){
    return 2 * (this->altura + this->largura);
  }

};

// 2) Classe com uso de 'this' para diferenciação no momento da criação da instância:
class Computador{
  private:
  int quantidade_ram;
  int quantidade_ssd;
  int numero_portas_usb;

  public:
  // Construtor:
  Computador(int quantidade_ram, int quantidade_ssd, int numero_portas_usb){
    this->quantidade_ram = quantidade_ram;
    this->quantidade_ssd = quantidade_ssd;
    this->numero_portas_usb = numero_portas_usb;
  }
};

// 3) Classe com Função construtora de parâmetros padrão:
class Mouse{
  private:
  string marca;
  string modelo;

  public:
  // Construtor com parâmetros padrão:
  Mouse(string marca = "Indefinido", string modelo = "Indefinido"){
    this->marca = marca;
    this->modelo = modelo;
  }
};

// 4) Clase 'Estabilizador', que aloca memória dinâmicamente no heap e libera no destrutor:
class Estabilizador{
  private:
  double* latencia_media;

  public:
  // Construtor:
  Estabilizador(double latencia_media_passada){
    this->latencia_media = new double(latencia_media_passada);
  }

  // Destrutor:
  ~Estabilizador(){
    delete this->latencia_media;
  }
};

// 5) Classe Math, com métodos inline para soma de dois números:
class Math{
  public:
  // Métodos inline de operações básicas:
  static inline int soma(int primeiro_algarismo, int segundo_algarismo){
      return primeiro_algarismo + segundo_algarismo;    
  }

  static inline int subtracao(int primeiro_algarismo, int segundo_algarismo){
      return primeiro_algarismo - segundo_algarismo;    
  }

  static inline int multiplicacao(int primeiro_algarismo, int segundo_algarismo){
      return primeiro_algarismo * segundo_algarismo;    
  }

  static inline int divisao(int primeiro_algarismo, int segundo_algarismo){
      return primeiro_algarismo / segundo_algarismo;    
  }
};

// 6) Classe com função estática que conta o número de vezes que instâncias da classe foram criadas:
class Cliente{
  private:
  static int total_clientes;

  public:
  Cliente(){
    total_clientes++;
  }

  static int obterTotalClientesCriados(){
    return total_clientes;
  }
};

// 7) Classe com métodos 'get' usando 'const', para reforçar o uso de 'const':
class Celular{
  private:
  string marca;
  string modelo;
  int quantidade_bateria;
  int quantidade_memoria;
  int quantidade_armazenamento;

  public:
  // Getters:
  string getMarca() const{
    return this->marca;
  }
  string getModelo() const{
    return this->modelo;
  }
  int getQuantidadeBateria() const{
    return this->quantidade_bateria;
  }
  int getQuantidadeMemoria() const{
    return this->quantidade_memoria;
  }
  int getQuantidadeArmazenamento() const{
    return this->quantidade_armazenamento;
  }
};

// 8) Implementação de duas classes 'friends', que permitem acesso aos seus atributos privados:
class Condicionador{
  private:
  int quantidade_milimetros;

  public:
  // Construtor:
  Condicionador(int quantidade_milimetros){
    this->quantidade_milimetros = quantidade_milimetros;
  }

  int getMilimetros(){
    return this->quantidade_milimetros;
  }

  friend class Shampoo;
};

class Shampoo{
  private:
  int quantidade_milimetros;

  public:
  // Construtor:
  Shampoo(int quantidade_milimetros, Condicionador& condicionador){
    this->quantidade_milimetros = condicionador.quantidade_milimetros + quantidade_milimetros;
  }

  int getQuantidadeMilimetros(){
    return this->quantidade_milimetros;
  }
};

// 9) Classe que possúi uma classe aninhada definida dentro de outra classe para acesso aos seus atributos privados:
class Casa{
  private:
  int quantidade_quartos;
  int quantidade_banheiros;

  public:
  // Construtor:
  Casa(int quantidade_quartos, int quantidade_banheiros){
    this->quantidade_quartos = quantidade_quartos;
    this->quantidade_banheiros = quantidade_banheiros;
  }
  
  //  Classe aninhada 'Sala':
  class Sala{
    public:
    // Métodos que acessam os atributos privados:
    int getQuantidadeQuartos(const Casa& casa){
      return casa.quantidade_quartos * casa.quantidade_quartos;
    }
    int getQuantidadeBanheiros(const Casa& casa){
      return casa.quantidade_banheiros * casa.quantidade_banheiros;
    }
  };

};

// 10) Classe 'Circle', que faz calculo de sua área usando uma função inline:
class Circle{
  public:
  static inline double area(double raio){
    return 3.14 * (raio * raio);
  }
};
