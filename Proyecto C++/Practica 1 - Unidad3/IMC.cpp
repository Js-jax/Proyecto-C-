#include <iostream>

using namespace std;

void imc()
{

  float peso = 0;
  float estatura = 0;
  float IMC = 0;

  cout << "Programa para calcular el IMC  \n";

  cout << "Ingresa tu peso:  ";
  cin >> peso;

  cout << "Ingresa estatura:  ";
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
  opc = 0;

  do
  {
    imc();

    cout << "Ingresa 1 para volver a calcular";
    cin >> opc;

  } while (opc == 1);
}