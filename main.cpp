#include <iostream>
#include "mimate.h" // Tu librería propia

int main() {
  int a;
  int b;
std::cout<<"Escribe un numero\n";
  std::cin>>a;
std::cout<<"Escribe otro numero\n";
  std::cin>>b;
   std::cout << "La resta es: " << restar(a, b) << std::endl;
    return 0;
}

