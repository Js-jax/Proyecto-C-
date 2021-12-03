#include <iostream>
using namespace std;

{
  int opc;
  cout << "---> CALCULADORA DE PERIMETRO Y AREA <---" << endl;
  cout << "¿Que figura deceas calcular?   Cuadrado[1]    Rectangulo[2]" << endl;
  cin >> opc;
  if (opc == 1)
  {
    float lado, area, perimetro;
    cout << "Ingresa uno de los lados del cuadrado: " << endl;
    cin >> lado;
    area = lado * lado;
    perimetro = lado * 4;
    cout << "El area del caudrado es: " << area << endl;
    cout << "El perimetro del cuadrado es: " << perimetro << endl;
  }

  if (opc == 2)
  {
    float base, altura, perimetro, area;
    cout << "Ingrese la base del rectangulo: " << endl;
    cin >> base;
    cout << "Ingrese la altura del rectangulo: " << endl;
    cin >> altura;
    area = (altura * 2) + (base * 2);
    cout << "El area del rdectangulo es: " << area << endl;
    cout << "El perimetro del rectangulo: " << perimetro << endl;
  }
}
int main()
{
  int opc;
  do
  {
    codigo();
    cout << "¿Quiere calcular el area y perimetro de nuevo?\nSi[1]  No[2]" << endl;
    cin >> opc;
  } while (opc == 1);
}