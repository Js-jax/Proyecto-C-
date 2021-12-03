#include <iostream>
using namespace std;
void codigo()
{
  int opc;
  cout << "---> CALCULADORA DE PERIMETRO Y AREA <---" << endl;
  cout << "¿Que figura deceas calcular?   Trapecio[1]    Rectangulo[2]" << endl;
  cin >> opc;
  if (opc == 1)
  {

    float lado1, lado2, lado3, lado4, b, B, h, area, perimetro;

    cout << "Ingresa las medidas de los lados del trapecio: " << endl;
    cin >> lado1 >> lado2 >> lado3 >> lado4;

    cout << "ingresa las dos medidas de las bases y altura del trapecio" << endl;
    cin >> b >> B >> h;

    area = (B + b) * h / 2;

    perimetro = lado1 + lado2 + lado3 + lado4;

    // Imprime el resultdo de dichas operaciones
    cout << "El area y perimetro del trapecio son: " << endl
         << "Area: " << area << endl
         << "Perimetro: " << perimetro << endl;
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