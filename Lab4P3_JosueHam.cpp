#include <iostream>
#include <string>
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

int num_repeticiones(char aux, string cad) {
	int repeticiones = 0;
	for (char caracter: cad)
	{
		if (caracter == aux)
		{
			repeticiones++;
		}
	}
	return repeticiones;
}

int menu() {
	cout << "\nMenu del Programa" << endl
		<< "1 -> Ejercicio 1 (Permutaciones con repeticion)" << endl
		<< "2 -> Ejercicio 2 (Analisis de ADN)" << endl
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
			 cout << "Ingrese una cadena: ";
			 string cadena = "";
			 cin >> cadena;
				 if ((cadena.length()) >= 6) {
					 char auxiliar = 0;
					 for (char caracter : cadena) {
						 int repes = num_repeticiones(auxiliar, cadena);
							 cout << caracter << ": " << repes << " veces" << endl;
					 }
					 int longitud = cadena.length();
					 int permutaciones = Factorial(longitud);
					 cout << "Numero de permutaciones de la palabra " << cadena << ": " << permutaciones << endl;
				 }
				 else {
					 cout << "La cadena ingresada no cumple con la longitud de 6 o mas";
				 }
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