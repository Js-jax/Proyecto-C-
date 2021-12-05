#include <iostream>
using namespace std;

class operacion
{

public:
  void formas();
};

void operacion::formas()
{

  float lado1, lado2, lado3, lado4, b, B, h, area, perimetro;
  int opc;

  cout << " }---Calcladora de area y perimetro---{\n Que figura desea calcular? Trapecio[1] Cuadrado[2] " << endl;
  cin >> opc;
  {

    // class opcion;
    if (opc == 1)
    {

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
      float lado1, lado2, perimetro, area;

      cout << "Ingrese uno de los del cuadrado: " << endl;
      cin >> lado1;

      perimetro = lado1 * 4;
      area = lado1 * lado1;

      cout << "El area y perimetro del cuadrado son: " << endl
           << "Area: " << area << endl
           << "Perimetro: " << perimetro << endl;
    }
  }
}

int main()
{

  int opc;
  operacion retorno;

  do
  {
    retorno.formas();
    cout << "¿Quiere calcular el area y perimetro de nuevo?\nSi[1]  No[2]" << endl;
    cin >> opc;
  } while (opc == 1);
}
