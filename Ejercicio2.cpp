#include <iostream>
using namespace std;
int main(void)
{
int i, edades[25], suma, prom, n;

cout << endl;
cout << "PROMEDIO DE ESTATUARA" << endl << endl;
cout << "Hola, bienvenido, cuantas estaturas desee promediar: ";
cin >> n;
if (n > 25)
cout << "No puede sobrepasar el arreglo. Programa finalizado." << endl;
else{
cout << "Digite las " << n << " estaturas:" << endl;
for(i = 0; i < n; i++)
cin >> edades[i];
suma = 0;
for(i = 0; i < n; i++)
suma = suma + edades[i];
prom = suma / n;
cout << "El promedio de estatura es: " << prom << endl;
}
cout << endl;
return 0;
}