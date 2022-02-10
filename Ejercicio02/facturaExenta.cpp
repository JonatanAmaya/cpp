/* 
    Ejercicio:   Factura Externa
    Autor:       Jonatan Amaya
    Universidad: UNAH-VS
    Carrera:     Licenciatura en Informatica Administrativa
    Hora:        19:00 - 20:00
    Catedratico: Master Billy Fernandez
    Clase:       Lenguaje de Programacion I
*/ 

#include  <iostream>
using namespace std;

int main(int argc, char** argv){

//Entrada de datos  

	double subtotal = 0;
    double total = 0;
    double impuesto = 0.15;
    int descuento = 0;
    double calculoDescuento = 0;
    double calculoImpuesto = 0;
    char estaExenta;

    // Le pide al usuario ingresar los datos 

    cout << "Ingrese el subtotal de la factura: ";
    cin >> subtotal;
    cout << endl;
    cout << "Ingrese el descuento(0,10,15,20): ";
    cin >> descuento;   
    cout << endl;
    cout <<  "Es factura excenta escriba S o N:" ;
    cin >> estaExenta;


    // Proceso de facturacion 
    // Se introduce S si la factura es extensa 
    if (estaExenta == 'S'  || estaExenta  =='s' )
    {
    total = subtotal - calculoDescuento;
    }
    // Se introduce N si la factura no es extensa y se aplicara el impuesto 
	if(estaExenta == 'N'  || estaExenta  == 'n' ){
    calculoDescuento = (subtotal*descuento)/100;
    calculoImpuesto = (subtotal - calculoDescuento) * impuesto;
    total = subtotal - calculoDescuento + calculoImpuesto;
    }
    
       
    // Salida
	cout << endl;
 cout <<  " Total a pagar es: "  << total;
	return 0;
}