#include <iostream>
using namespace std;

class suma // Nombre de la clase
{
public:             // Especificador de acceso
  void operacion(); //  Declaracion de metodo \ funcion
};
void suma::operacion() // Definicion de metodo---  Funcion fuera de la clase
{

  int a = 0, b = 0, res = 0; // Declaracion de variables

  cout << "Ingrese el valor inicial: " << endl;
  cin >> a;
  cout << "Ingrese el valor final: " << endl;
  cin >> b;

  //  Declaracion de condicionles
  //  Compara el rango del valor inicial y final

  if (a < b)
  {
    cout << "\nLa res de la sucecion es:" << endl;
    for (a; a <= b; a++)
      res += a;
    cout << "--> " << res << endl;
  }

  else if (a > b)
  {
    cout << "\nLa suma de la sucesion es:" << endl;

    for (b; b <= a; b++)
      res += b;
    cout << "--> " << res << endl;
  }
}

int main()
{
  int opc;
  suma retorno; // Un objeto sobre la clase datos

  do
  {
    retorno.operacion(); // Llama al metodo

    cout << "\nDesea realizar otra suma? \nSi[1]  No[2]" << endl;
    cin >> opc;
  } while (opc == 1);
}
