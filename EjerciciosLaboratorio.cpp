#include <iostream> //Ejercicio sobre Kraven el Cazador

using namespace std;

int main()
{
    string Choose, Malo, Animal, Persona; // declaramos 4 variables de texto

    // comienza el texto en cuestion, dando contexto al usuario
    cout << "----------------------------------------------------------------------------" << endl;
    cout << endl;
    cout << "Kraven es un cazador de personas malas y protector de animales," << endl;
    cout << "dependiendo de como te identifiques, asi actuara contigo" << endl;
    cout << endl;
    cout << " -> Como te identificas? (Escribe tal y como aparece: Malo, Animal, Persona)" << endl; // se realiza la pregunta
    cout << endl;
    cout << "----------------------------------------------------------------------------" << endl;
    cout << "Respuesta: ";
    cin >> Choose; // se recive la variable en forma de texo

    if (Choose == "Malo") // Respuesta para "Malo"
    {
        cout << "-----------------------------------------------------" << endl;
        cout << endl;
        cout << "Eres parte de las presas de Kraven, bad luck fella :(" << endl;
        cout << endl;
        cout << "-----------------------------------------------------" << endl;
    }
    else if (Choose == "Animal") // Respuesta para "Animal"
    {
        cout << "--------------------------------------" << endl;
        cout << endl;
        cout << "En hora buena!, Kraven te protegera :D" << endl;
        cout << endl;
        cout << "--------------------------------------" << endl;
    }

    else if (Choose == "Persona") // Respuesta para "Persona"
    {
        cout << "------------------------------------------" << endl;
        cout << endl;
        cout << "Kraven se limita a saludarte, buen destino" << endl;
        cout << endl;
        cout << "------------------------------------------" << endl;
    }
    else // Resultado en caso que el usario ingrese incorrectamente las respuestas
    {
        cout << "--------------------------------------------------" << endl;
        cout << endl;
        cout << "Ha ingresado un dato invalido, por favor verifique" << endl;
        cout << "que haya escrito correctamente su respuesta" << endl;
        cout << endl;
        cout << "--------------------------------------------------" << endl;
    }
    return 0;
}

