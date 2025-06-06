#include <iostream>
using namespace std;

int main() {
  int option = 0;
  double total = 0;
  double dinero = 0;

  cout << "Ingresa la cantidad a convertir: \n";
  cin >> dinero;

  if (dinero > 0) {
    cout << "Selecciona una opcion: \n";
    cout << "------Opciones------\n";
    cout << "1. USD a EUR     \n";
    cout << "2. USD a JPY     \n";
    cout << "3. USD a GBP     \n";
    cin >> option;
    switch (option) {
      case 1:
        total = dinero * 0.88;

        cout << "El valor en EUR es: " << total << endl;
        break;
      case 2:
        total = dinero * 144.93;
        cout << "El valor en JPY es: " << total << endl;
        break;
      case 3:
        total = dinero * 0.74;
        cout << "El valor en GBP es: " << total << endl;
        break;
      default:
        cout << "Datos no validos" << endl;

        break;
    }
  } else {
    cout << "No puedes ingresar numeros negativos";
  }

  return 0;
}
