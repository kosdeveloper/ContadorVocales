#include <iostream>
using namespace std;

int cuenta_espacios(char*);
int cuenta_vocales(char*);

int main()
{
    char cadena[100];
    cout << "Introduce cadena: ";
    cin.getline(cadena, 100);

    //char* ptr_cadena = cadena;
    //cout << *ptr_cadena<<endl;
    //cout << *(ptr_cadena + 1) << endl;
    //cout << *(ptr_cadena + 2) << endl;

    //función toupper: pasa el carácter a mayúsculas (devuelve int ascii)
    //putchar: escribe el caracter correpondiente al nºascii indicado
    //putchar(77); // 77 es la M
    //cout << endl;
    //cout<<toupper('m')<<endl; //devuelve un 77 (ascii de M)
    //putchar(toupper(cadena[0])); //imprime mayúscula del caracter en posición 0 de la cadena

    //en la llamada a la funcion se envía el array de caracteres
    cout << "Numero de espacios: " << cuenta_espacios(cadena) << endl;
    cout << "Numero de vocales: " << cuenta_vocales(cadena) << endl;

    return 0;
}

//función 
int cuenta_espacios(char* ptr_cadena) //ptr_cadena contiene la direccion de inicio del array de caracteres
{
    int contador = 0; //contador de espacios

    while (*ptr_cadena!='\0') //mientras no llegue al final de la cadena
    {
        if(*ptr_cadena==' ') contador++;
        ptr_cadena++;
    }
    return contador;
}

int cuenta_vocales(char* ptr_cadena) //s contiene la direccion de inicio del array de caracteres
{
    int contador = 0; //contador de vocales

    while (*ptr_cadena != '\0') //mientras no llegue al final de la cadena
    {
        switch (toupper(*ptr_cadena)) 
        {                          
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            contador++;
        }
        ptr_cadena++;
    }
    return contador;
}