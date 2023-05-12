#include <iostream>
#include <cstring>
using namespace std;

int Factorial(int numero) {
	if (numero == 0)
	{
		return 1;
	}
	else {
		return numero * (numero - 1);
	}
}

int menu() {
	cout << "\nMenu del Programa" << endl
		<< "1 -> Ejercicio 1 ()" << endl
		<< "2 -> Ejercicio 2 ()" << endl
		<< "3 -> Salir" << endl
		<< "Ingrese la opcion que desea: " << endl;
	int numero;
	cin >> numero;
	return numero;
}

int main()
{
	int respuesta = menu();
	while (respuesta != 3) {
		switch (respuesta)
		{
		 case 1: {

		}
			   break;
		 case 2: {

		 }
			   break;
		 default: 
			 cout << "Seleccione una opcion valida";
		}
		respuesta = menu();
	}//Fin del while
}//Fin de la clase