// Subjects.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
using namespace std;



int main()
{
	char Mat1[100];
	char Mat2[100];
	char Mat3[100];
	float parcial1, parcial2, parcial3, promedio1, promedio2, promedio3, ponderacionTotal;

	cout << "Ingrese el nombre de la primer materia:  ";
	cin.getline(Mat1,100,'\n');	
	cout << "Ingrese la primera parcial:  ";
	cin >> parcial1;
	cout << "Ingrese la segunda parcial:  ";
	cin >> parcial2;
	cout << "Ingrese la tercera parcial:  ";
	cin >> parcial3;
	promedio1 = (parcial1 + parcial2 + parcial3) / 3;
	cin.ignore();

	cout << "\nIngrese el nombre de la segunda materia:  ";
	cin.getline(Mat2, 100, '\n');	
	cout << "Ingrese la primera parcial:  ";
	cin >> parcial1;
	cout << "Ingrese la segunda parcial:  ";
	cin >> parcial2;
	cout << "Ingrese la tercera parcial:  ";
	cin >> parcial3;
	promedio2 = (parcial1 + parcial2 + parcial3) / 3;
	cin.ignore();

	cout << "\nIngrese el nombre de la tercer materia:  ";
	cin.getline(Mat3, 100, '\n');	
	cout << "Ingrese la primera parcial:  ";
	cin >> parcial1;
	cout << "Ingrese la segunda parcial:  ";
	cin >> parcial2;
	cout << "Ingrese la tercera parcial:  ";
	cin >> parcial3;
	promedio3 = (parcial1 + parcial2 + parcial3) / 3;
	cin.ignore();

	ponderacionTotal = (promedio1 + promedio2 + promedio3) / 3;
	cout << "\nPonderacion total:  " << ponderacionTotal << endl;

	if (promedio1 >=70)
	{
		cout << "Aprobada: " << Mat1 << endl;
	}
	if (promedio2 >= 70)
	{
		cout << "Aprobada: " << Mat2 << endl;
	}
	if (promedio3 >= 70)
	{
		cout << "Aprobada: " << Mat3 << endl;
	}

	if (ponderacionTotal == 100)
	{
		cout << "Felicidades" << endl;
	}
	if ((ponderacionTotal >=90) &&  (ponderacionTotal <=99))
	{
		cout << "Estas a unos cuantos pasos del exito" << endl;
	}
	if ((ponderacionTotal >= 71) && (ponderacionTotal <= 89))
	{
		cout << "Es buena la calificacion pero puedes mejorar" << endl;
	}
	if (ponderacionTotal == 70)
	{
		cout << "Pansaste" << endl;
	}
	if (ponderacionTotal < 70)
	{
		cout << "suerte para la proxima" << endl;
	}


	//dev c++
	/*char Mat1[100];
	char Mat2[100];
	char Mat3[100];
	float parcial1, parcial2, parcial3, promedio1, promedio2, promedio3, ponderacionTotal;

	printf("Ingrese el nombre de la primer materia:  ");
	scanf("%s", Mat1);
	printf("Ingrese la primera parcial:  ");
	scanf("%f", &parcial1);
	printf("Ingrese la segunda parcial:  ");
	scanf("%f", &parcial2);
	printf("Ingrese la tercera parcial:  ");
	scanf("%f", &parcial3);
	promedio1 = (parcial1 + parcial2 + parcial3) / 3;

	printf("\nIngrese el nombre de la segunda materia:  ");
	scanf("%s", Mat2);
	printf("Ingrese la primera parcial:  ");
	scanf("%f", &parcial1);
	printf("Ingrese la segunda parcial:  ");
	scanf("%f", &parcial2);
	printf("Ingrese la tercera parcial:  ");
	scanf("%f", &parcial3);
	promedio2 = (parcial1 + parcial2 + parcial3) / 3;

	printf("\nIngrese el nombre de la tercer materia:  ");
	scanf("%s", Mat3);
	printf("Ingrese la primera parcial:  ");
	scanf("%f", &parcial1);
	printf("Ingrese la segunda parcial:  ");
	scanf("%f", &parcial2);
	printf("Ingrese la tercera parcial:  ");
	scanf("%f", &parcial3);
	promedio3 = (parcial1 + parcial2 + parcial3) / 3;

	ponderacionTotal = (promedio1 + promedio2 + promedio3) / 3;
	printf("\nPonderacion total:  %f \n", ponderacionTotal);

	if (promedio1 >= 70)
	{
		printf("Aprobada: %s \n", Mat1);
	}
	if (promedio2 >= 70)
	{
		printf("Aprobada: %s \n", Mat2);
	}
	if (promedio3 >= 70)
	{
		printf("Aprobada: %s \n", Mat3);
	}

	if (ponderacionTotal == 100)
	{
		printf("Felicidades\n\n");
	}
	if ((ponderacionTotal >= 90) && (ponderacionTotal <= 99))
	{
		printf("Estas a unos cuantos pasos del exito\n\n");
	}
	if ((ponderacionTotal >= 71) && (ponderacionTotal <= 89))
	{
		printf("Es buena la calificacion pero puedes mejorar\n\n");
	}
	if (ponderacionTotal == 70)
	{
		printf("Pansaste\n\n");
	}
	if (ponderacionTotal < 70)
	{
		printf("suerte para la proxima\n\n");
	}*/


	system("PAUSE");
    return 0;
}