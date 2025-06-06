#include <iostream>
using namespace std;

int main() {
  int suma = 0;
  int num = 0;
  cout << "Ingrese cuantos numeros tenfra tu arreglo: \n";
  cin >> num;

  int arreglo[num];
  for (int i = 0; i < num; i++) {
    cout << "Ingresa tu primer numero " << i + 1 << ": ";
    cin >> arreglo[i];
    if (arreglo[i] % 2 != 1) {
      suma += arreglo[i];  // pares sumados
    } 
  }
  cout << "La suma de los numeros pares es: " << suma << endl;
  return 0;
}