
/*3. Realice un programa que calcule y muestre en la salida estándar la suma de 
los cuadrados de los 10 primeros enteros mayores que cero.

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int suma=0,cuadrado;
	
	for(int i=1;i<=10;i++){
		cuadrado = i * i;
		suma += cuadrado;		
	}
	
	cout<<"\nLa suma de los cuadrados es: "<<suma;
	
	getch();
	return 0;
}
*/

#include <Arduino.h>

int suma=0,cuadrado;

void setup() 
{
  	Serial.begin(9600);
}

void loop() 
{
	
	for(int i=1;i<=10;i++){
		cuadrado = i * i;
		suma += cuadrado;		
	}
	
	Serial.println("\nLa suma de los cuadrados es: " + String(suma));
	
}