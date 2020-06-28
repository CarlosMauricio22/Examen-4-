#include <iostream>
#include <stdlib.h>
using namespace std;
int main(void){
    int numAlumnos, numNotas;
    int contAprobados = 0;
    int contReprobados =0;

    cout<<"Ingrese el numero de estudiantes a evaluar: "; cin>>numAlumnos;
    int arr[numAlumnos];
    cout<<"Ingrese la cantidad de notas por estudiante: "; cin>>numNotas;
    int arr2[numNotas];

    int k=0;
    for(int i = 0;i<numAlumnos;i++)
    {
        cout<<"Calificaciones del alumno: "<<i+1<<endl;
        for(int j=0;j<numNotas;j++)
        {
             cout<<"Calificaciones: "<<j+1<<endl;
             cin>>arr2[j];
             arr[j+k]=arr2[j];

             if(arr2[j]>=6)
             {
                 contAprobados++;
             }
             else
             {
                 contReprobados++;
             }
             
        }
        k=k+numNotas; 
     }
     system("cls");
      cout<<"Motrar todas las calificaciones de los alumnos: "<<endl;
      for(int i=0;i<k;i++)
      {
          cout<<arr[i]<<endl;
      }
     cout<<"cantidad de calf aprobadas: "<<contAprobados<<endl;
     cout<<"cantidad de calf reprobadas: "<<contReprobados<<endl;

}
