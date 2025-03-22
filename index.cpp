#include <iostream>
#include <random>

using std::cout;
using std::endl;

int main(){


  std::random_device rd;
  std::default_random_engine eng(rd());
  std::uniform_int_distribution<int> distr(0, 110);

  for(int i = 0; i < 100; i++){
    cout << distr(eng) << ";" << endl;
  }

  return 0;
}
