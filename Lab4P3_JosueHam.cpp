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

			 for (char caracter : cadena)
			 {
				 if ((int)caracter >= 65 && (int)caracter <= 90)
				 {
					 if ((cadena.length()) >= 6) {
						 int acum = 0;
						 for (char caracter : cadena) {
							 int repes = num_repeticiones(caracter, cadena);
							 if (repes > 1)
							 {
									 cout << caracter << ": " << repes << " veces" << endl;
									 acum += Factorial(repes);	
							 }
						 }

						 int longitud = cadena.length();
						 int factorial_longitud = Factorial(longitud);
						 int permutaciones = factorial_longitud / acum;
						 cout << "Numero de permutaciones de la palabra " << cadena << ": " << permutaciones << endl;
					 }
					 else {
						 cout << "La cadena ingresada no cumple con la longitud de 6 o mas";
					 }
				 }
				 else {
					 cout << "La cadena solo puede ser mayuscula";
				 }
				 break;
			 }
		}
			   break;
		 case 2: {
			 cout << "Ingrese una cadena de ADN: ";
			 string cadena_ADN;
			 cin >> cadena_ADN;
			for  (char caracter : cadena_ADN)
			 {
				if ((int)caracter >= 65 && (int)caracter <= 90)
				{
					if (caracter == 'A' || caracter == 'C' || caracter == 'G' || caracter == 'T')
					{
						cout << "Numero total de Nucleotidos: " << cadena_ADN.length() << endl;
					}
				}
				break;
			 }
		 }
			   break;
		 default: 
			 cout << "Seleccione una opcion valida";
		}
		respuesta = menu();
	}//Fin del while
}//Fin de la clase