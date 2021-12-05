#include <iostream>

using namespace std;

class datos
{

public:
  void calcular();
};

void datos ::calcular()
{
  float peso = 0, estatura = 0, IMC = 0;
  int opc;

  cout << "Programa para calcular el IMC  \n";

  cout << "Ingresa tu peso:  ";
  cin >> peso;

  cout << "Ingresa tu estatura:  ";
  cin >> estatura;

  float est2 = estatura * estatura;
  IMC = peso / est2;

  cout << "Tu indice de IMC =  " << IMC;

  if (IMC < 18.5)
  {
    cout << " \n Por debajo del peso  " << endl;
  }
  else if (IMC >= 18.5 && IMC <= 24.9)
  {
    cout << "\n Saludable " << endl;
  }
  else if (IMC >= 25 && IMC <= 29.9)
  {
    cout << " \n Sobrepeso" << endl;
  }
  else if (IMC >= 30 && IMC <= 34.9)
  {
    cout << "\n Obesidad I " << endl;
  }
  else if (IMC >= 35 && IMC <= 39.9)
  {
    cout << "\n Obesidad II " << endl;
  }
  else if (IMC >= 40)
  {
    cout << "\n Obesidad III " << endl;
  }
}
int main()
{

  int opc;
  datos retorno;

  do
  {
    retorno.calcular();
    cout << "Ingresa 1 para volver a calcular";
    cin >> opc;

  } while (opc == 1);
}