#include <iostream>
#include <cmath> //isso aqui e nescessario pra usar o tal do "sqrt"
using namespace std;

int main ()
{
  //define três variveis int
  int valorA, valorB, valorC, delta, x1, x2;
  //define uma varivel char
  char quero;

  //pergunta o valor de A,B e C
  cout << "digite valor de A:";
  std::cin >> valorA;
  cout << "digite valor de B:";
  std::cin >> valorB;
  cout << "digite valor de C:";
  std::cin >> valorC;
  
  //definir quem e delta
  delta = valorB*valorB - 4*valorA*valorC;

  //pergunta se vc quer calcular os outros
  cout << "tu quer calcular x1 e x2 ? y/n";
  std::cin >> quero;

  //se sim calcula e mostra
  if (quero == 'y')
  {
    x1 = (-valorB + sqrt(delta)) / (2*valorA); //calcula x1
    x2 = (-valorB - sqrt(delta)) / (2*valorA); //calcula x2

    cout << "valor de x1:" << x1 << endl;//printa x1
    cout << "valor de x2:" << x2 << endl;//printa x2
    cout << "valor de delta:" << delta << endl;//printa delta
  }
  //senão apenas mostra o delta
  else
  {
    cout << delta;
  }

  system("pause");
  return 0;
}
