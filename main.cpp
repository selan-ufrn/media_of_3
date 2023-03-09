#include <iostream> // acessar o cout cin
#include <string> // acessar o strin
#include <sstream> // acessar o ostrinstream

int func(int x, int y){

}

std::string to_string(int V[], std::size_t len){
  std::ostringstream oss;


}

int main (int argc, char *argv[])
{
  int V[]{5, 0, 0, 3, 0, 0, 8};
  std::size_t len{7};

  // Imprimir o vetor na saida padrao.
  std::cout << ">>> Vetor original: " << to_string(V,len) << '\n';

  return 0;
}
