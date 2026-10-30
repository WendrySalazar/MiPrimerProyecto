#include <iostream>
#include <string>
using namespace std;
int main() {
    string nombre;
    int edad;
    cout << "Ingrese su nombre: ";
    getline(cin, nombre);
    cout << "Hola, " << nombre << endl;
    cout << "Ingrese su edad: ";
    cin >> edad;
    
    return 0;
}