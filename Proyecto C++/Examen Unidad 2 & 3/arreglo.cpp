#include <iostream>

using namespace std;

void arreglo()
{

  int n, m;

  do
  {
    do
    {
      cout << "Ingresa el tamaC1o del primer arreglo de mayor a 0 y menor a 20: ";
      cin >> n;
    } while (n < 0 || n > 20);
    cout << n << endl;

    do
    {
      cout << "Ingresa el tamaC1o del segundo arreglo  mayor a 0 y menor a 20: \n";
      cin >> m;

    } while (m < 0 || m > 20);
    cout << m << endl;

    if (n == 0 && m == 0)
    {
      cout << "La suma es nula" << endl;
    }

  } while (n == 0 && m == 0);

  int A[n], B[m], C[20];

  if (A[n] > B[m])
  {
    C[0] = A[n];
  }
  else if (B[m] > A[n])
  {

    C[0] = B[m];
  }

  cout << "Ingresa el primer valor " << endl;

  for (int i = 0; i < n; i++)
  {
    cout << "--------" << endl;
    cin >> A[i];
  }

  cout << " Ingrese el segundo valor " << endl;

  for (int i = 0; i < m; i++)
  {
    cout << "--------" << endl;
    cin >> B[i];
  }

  cout << "La suma es: " << endl;

  if (n > m)
  {
    for (int i = 0; i < m; i++)
    {

      C[i] = A[i] + B[i];

      cout << "Suma " << C[i] << endl;
    }
  }

  for (int i = m; i <= n - 1; i++)
  {
    C[i] = A[i];
    cout << "Sobrante" << C[i] << endl;
  }

  if (m > n)
  {
    for (int i = 0; i < n; i++)
    {

      C[i] = A[i] + B[i];
      cout << "Suma" << C[i] << endl;
    }
  }

  for (int i = n; i <= m - 1; i++)
  {
    C[i] = B[i];
    cout << "Sobrante" << C[i] << endl;
  }

  if (m == n)
    for (int i = 0; i < n; i++)
    {

      C[i] = A[i] + B[i];
      cout << "Suma: [" << C[i] << "]" << endl;
    }
}

int main()
{
  int opc = 0;
  do
  {
    arreglo();

    cout << "Ingresa 1 para volver a calcular: ";
    cin >> opc;
  } while (opc == 1);
}