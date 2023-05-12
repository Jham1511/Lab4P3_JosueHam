#include <iostream>
#include <string>
#include <vector>
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

double porcentaje(double longitud, double repeticiones) {
	double x = 0;
	x = repeticiones * 100 / longitud;
	return x;
}
int nucleotidos_Consecutivos(char letra, string cadena) {
	int cont = 0;
	for (char caracter : cadena)
	{
		if (caracter != letra)
		{
			cont = 0;
		}
		else {
			cont++;
		}

	}
	return cont;
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
			 vector <char> caracteres_repetidos(cadena.length());
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
								 caracteres_repetidos.push_back(caracter);
								 if ((find(caracteres_repetidos.begin(), caracteres_repetidos.end(), caracter)) != caracteres_repetidos.end()) {
									 caracteres_repetidos.erase(caracteres_repetidos.end());
								 } 
							 }
						 }
						 for (int i = 0; i < caracteres_repetidos.size(); i++)
						 {
							 cout << caracteres_repetidos[i] << ": " << num_repeticiones(caracteres_repetidos[i], cadena) << " veces" << endl;
							 acum += Factorial(num_repeticiones(caracteres_repetidos[i], cadena));
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
						for (char letras : cadena_ADN)
						{
							int repes = num_repeticiones(letras, cadena_ADN);
							int nucleotidos_actual = nucleotidos_Consecutivos(caracter, cadena_ADN);
							cout << letras << ": " << repes << endl;
							cout << letras << ": " << porcentaje(cadena_ADN.length(), repes) << " %" << endl;
						}
						
						
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