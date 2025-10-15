# Omega-2.0

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float peso, altura, imc;

    // Solicitar al usuario que ingrese su peso en kilogramos
    cout << "Ingrese su peso en kg: ";
    cin >> peso;

    // Solicitar al usuario que ingrese su altura en metros
    cout << "Ingrese su altura en metros: ";
    cin >> altura;

    // Calcular el IMC
    imc = peso / (altura * altura);

    // Mostrar el resultado con dos decimales
    cout << fixed << setprecision(2);
    cout << "Su IMC es: " << imc << endl;

    // Clasificación del IMC
    if (imc < 18.5) {
        cout << "Clasificación: Bajo peso" << endl;
    } else if (imc >= 18.5 && imc < 24.9) {
        cout << "Clasificación: Peso normal" << endl;
    } else if (imc >= 25 && imc < 29.9) {
        cout << "Clasificación: Sobrepeso" << endl;
    } else {
        cout << "Clasificación: Obesidad" << endl;
    }

    return 0;


}
