#include <iostream>
#include <stdlib.h>
#include <classe.hpp>
// Fib
int f(int n){

  int um1=1, u=1, up1=0;
  for (int i=2; i<n; i++){
    up1 = um1 + u;
    um1 = u;
    u = up1;
  }
  return up1;
}

// Carre
int g(int n){
  return n*n;
}


int main(int argc, char** argv )
{
  std::cout << "Hello " << getenv("USER") << " !" << std::endl;
  Personnage p1;
  // test
  std::cout << "Fib**2:" <<std::endl;
  for (int i = 0; i < 10; i++){
    std::cout << f(i) << " & " << g(f(i)) <<std::endl;
  }

}
