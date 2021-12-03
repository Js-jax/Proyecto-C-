#include <iostream>
using namespace std;

class suma
{
public:
  int val1, val2, suma;

  void operacion()
  {

    suma = 0;
    cout << "Ingrese el valor inicial: " << endl;
    cin >> val1;
    cout << "Ingrese el valor final: " << endl;
    cin >> val2;

    if (val1 < val2)
    {
      cout << "\nLa suma de la sucecion es:" << endl;
      for (val1; val1 <= val2; val1++)
        suma += val1;
      cout << "--> " << suma << endl;
    }

    else if (val1 > val2)
    {
      cout << "\nLa suma de la sucecion es:" << endl;

      for (val2; val2 <= val1; val2++)
        suma += val2;
      cout << "--> " << suma << endl;
    }
  }
};

int main()
{
  int opc;
  do
  {
    suma(operacion);
    cout
        << "\nDecea realizar otra suma de valores?\nSi[1]  No[2]" << endl;
    cin >> opc;
  } while (opc == 1);
}