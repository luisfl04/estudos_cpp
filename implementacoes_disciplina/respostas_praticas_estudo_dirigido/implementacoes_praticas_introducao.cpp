#include <iostream>
#include <string>
#include <cstring>
using namespace std;

// 1. Enumeração para os dias da semana
enum DiaSemana { Domingo, Segunda, Terca, Quarta, Quinta, Sexta, Sabado };

void programaEnum() {
    int valor;
    cout << "Digite um número (0-6) para o dia da semana: ";
    cin >> valor;
    switch (valor) {
        case Domingo: cout << "Domingo\n"; break;
        case Segunda: cout << "Segunda\n"; break;
        case Terca:   cout << "Terça\n"; break;
        case Quarta:  cout << "Quarta\n"; break;
        case Quinta:  cout << "Quinta\n"; break;
        case Sexta:   cout << "Sexta\n"; break;
        case Sabado:  cout << "Sábado\n"; break;
        default:      cout << "Valor inválido.\n";
    }
}

// 2. União com inteiro e caractere
union Dado {
    int i;
    char c;
};

void programaUnion() {
    Dado d;
    d.i = 65;
    cout << "Inteiro: " << d.i << "\n";
    d.c = 'A';
    cout << "Caractere: " << d.c << "\n";
}

// 3. Struct Data e função para exibir
struct Data {
    int dia;
    int mes;
    int ano;
};

void exibirData(Data d) {
    cout << "Data: " << d.dia << "/" << d.mes << "/" << d.ano << "\n";
}

// 4. Concatenar strings
void programaConcatenarStrings() {
    string s1, s2;
    cout << "Digite a primeira string: ";
    cin >> s1;
    cout << "Digite a segunda string: ";
    cin >> s2;
    cout << "Resultado: " << s1 + s2 << "\n";
}

// 5. Comprimento de cadeia de caracteres
void programaComprimento() {
    char texto[100];
    cout << "Digite uma cadeia de caracteres: ";
    cin >> texto;
    cout << "Comprimento: " << strlen(texto) << "\n";
}

// 6. Variáveis global e local
int varGlobal = 10;

void programaVariaveis() {
    int varLocal = 20;
    cout << "Global: " << varGlobal << ", Local: " << varLocal << "\n";
}

// 7. Média de 5 números em um arranjo
void programaMedia() {
    int numeros[5];
    int soma = 0;
    cout << "Digite 5 números inteiros:\n";
    for (int i = 0; i < 5; i++) {
        cin >> numeros[i];
        soma += numeros[i];
    }
    cout << "Média: " << (soma / 5.0) << "\n";
}

// 8. Função inline para soma
inline int soma(int a, int b) {
    return a + b;
}

int main() {
    // Chamada de todas as funções na ordem
    programaEnum();
    programaUnion();

    Data hoje = {15, 5, 2025};
    exibirData(hoje);

    programaConcatenarStrings();
    programaComprimento();
    programaVariaveis();
    programaMedia();

    int x = 3, y = 7;
    cout << "Soma inline de " << x << " e " << y << " = " << soma(x, y) << "\n";

    return 0;
}