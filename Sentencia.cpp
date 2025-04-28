#include <iostream>

using namespace std;

int main()
{
    float B = 15.2;      // Variable decimal
    double A = 12.25;    // variable que abarca mas decimales que float
    int temperatura = 0; // Variable de tipo entero
    cout << endl;
    cout << "----------------------" << endl;
    cout << endl;
    cout << "Ingresa la temperatura" << endl;
    cout << endl;
    cout << "----------------------" << endl;
    cout << "-> ";
    cin >> temperatura;

    if (temperatura < 15)
    {
        // Si la temperatura es menor que 15 mostrar el siguiente mensaje
        cout << "Hace frio, ponte un abrigo" << endl;
    }
    else if (temperatura > 20)
    {
        // si la temperatura no es menor a 15, pero mayor que 20 mostrar el siguiente mensaje
        cout << "Hace calor, no necesitas un abrigo" << endl;
    }
    else
    {
        // si la temperatura no es menor a 15 y tampoco es menor a 20, mostrar el siguiente mensaje
        cout << "El clima es agradable. Tenga un buen dia" << endl;
    }

    return 0;
}