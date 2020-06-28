#include <iostream>
#include <string>
using namespace std;
string codificar(string);
int main()
{
    string cadena;
    cout<< endl <<"Ingresa el texto: "<<endl;
    getline(cin, cadena);
    cout << codificar(cadena)<<endl;
}

