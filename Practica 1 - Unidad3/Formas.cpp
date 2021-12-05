#include <iostream>
using namespace std;

class operacion // Nombre de la clase
{
public:          // Especificador de acceso
  void formas(); //  Declaracion de metodo \ funcion
};

void operacion::formas() // Definicion de metodo---  Funcion fuera de la clase
{

  float lado1, lado2, lado3, lado4, b, B, h, area, perimetro; //  Declaracion de variables
  int opc;

  cout << " }---Calcladora de area y perimetro---{\n Que figura desea calcular? Trapecio[1] Cuadrado[2] " << endl;
  cin >> opc;

  if (opc == 1) //  Declaracion de condicionles
                // Da la opcion sobre eligir entre una forma u otra
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

int main()
{

  int opc;
  operacion retorno; // Un objeto sobre la clase datos

  do
  {
    retorno.formas(); // Llama al metodo
    cout << "¿Quiere calcular el area y perimetro de nuevo?\nSi[1]  No[2]" << endl;
    cin >> opc;
  } while (opc == 1);
}
