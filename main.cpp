/* 2. Convertir la cantidad de dólares ingresados por un usuario a colones y mostrar el resultado en
pantalla. */
#include <iostream>
using namespace std;

int main() {
 float n1, cambio;
    cout << "\nConvertir la cantidad de dólares ingresados a colones: ";//función del Prográma
    cout << "\nIngrese la cantidad de dolares: ";
    cin >> n1 ;
    cambio = n1 * 613;   //formula del cambio
    cout << "La cantidad de dolares equivalen en colones a : " <<"$" <<cambio;
    return 0;
}