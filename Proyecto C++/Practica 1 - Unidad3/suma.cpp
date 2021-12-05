#include <iostream>
using namespace std;

class suma
{
public:
  void operacion();
};
void suma::operacion()
{

  int a = 0, b = 0, res = 0;

  cout << "Ingrese el valor inicial: " << endl;
  cin >> a;
  cout << "Ingrese el valor final: " << endl;
  cin >> b;

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
  suma retorno;

  do
  {
    retorno.operacion();

    cout << "\nDesea realizar otra suma? \nSi[1]  No[2]" << endl;
    cin >> opc;
  } while (opc == 1);
}
