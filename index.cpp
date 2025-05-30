#include <iostream>
#include <cstring>
using namespace std;

// 5. Comprimento de cadeia de caracteres
void programaComprimento() {
    char texto[100];
    cout << "Digite uma cadeia de caracteres: ";
    cin >> texto;
    cout << "Comprimento: " << strlen(texto) << "\n";
}

int main(int argc, char const *argv[]) {
  programaComprimento();
  return 0;
}
