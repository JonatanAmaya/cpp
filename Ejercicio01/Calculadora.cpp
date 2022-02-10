/* 
    Proposito:   Programa que sumen, reste, multiplique y divida.

    Ejercicio:   Calculadora
    Autor:       Jonatan Amaya
    Universidad: UNAH-VS
    Carrera:     Licenciatura en Informatica Administrativa
    Hora:        19:00 - 20:00
    Catedratico: Master Billy Fernandez
    Clase:       Lenguaje de Programacion I
*/ 

#include <iostream>

using namespace std;

int main ( int argc, char const *argv[] )
{
    // Variable
      int a = 0;
      int b = 0;
      int Total = 0;

    // Datos de entrada
       cout<<"Ingresar el valor de a: " <<endl;
        cin>> a;
       cout << endl;
       cout<<"Ingresar el valor de b: " <<endl;
        cin>> b;
       cout << endl;

    // Proceso
       Total = a + b;
       cout<<"Total de la suma es: " <<Total <<endl;
      cout << endl;
       Total = a - b;
       cout<<"Total de la resta es: " <<Total <<endl;
      cout << endl;
       Total = a * b;
       cout<<"Total de la multiplicacion es: " <<Total <<endl;
      cout << endl;
       Total = a / b;
       cout<<"Total de la division es: " <<Total <<endl;
      cout << endl;
      cout << endl;
       
    return 0;
}