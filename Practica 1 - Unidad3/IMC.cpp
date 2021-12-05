#include <iostream>

using namespace std;

class datos // Nombre de la clase
{
public:            // Especificador de acceso
  void calcular(); //  Declaracion de metodo \ funcion
};

void datos ::calcular() // Definicion de metodo---  Funcion fuera de la clase
{
  float peso = 0, estatura = 0, IMC = 0; // Declaracion de variables
  int opc;

  cout << "Programa para calcular el IMC  \n";

  cout << "Ingresa tu peso:  ";
  cin >> peso;

  cout << "Ingresa tu estatura:  ";
  cin >> estatura;

  float est2 = estatura * estatura; // Calcula la estatura al cuadrado
  IMC = peso / est2;                // Formula para calcular el IMC

  /******************************************
   * Declaracion de condicionles if sobre parametros
   * del indice de masa corporal
   ******************************************/

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
  datos retorno; // Un objeto sobre la clase datos

  do // Retorna al principio
  {
    retorno.calcular(); // Llama al metodo
    cout << "Ingresa 1 para volver a calcular";
    cin >> opc;

  } while (opc == 1);
}