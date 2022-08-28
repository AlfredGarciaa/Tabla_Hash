#include <iostream>
#include <string>
#include "Hash.h"
#include <fstream>
using namespace std;

int main()
{
	Hash<string[]>* hash = new Hash<string[]>;
	int op;
	string palabra;
	do
	{
		//Cambiamos la interfaz del menu
		printf("\n\t\t\t\t<<<<<   FERRETERIA   >>>>>\n\n");
		printf("\t\t\t1.  Leer Archivo e insertar en la HASH.\n");
		printf("\t\t\t2.  Insertar.\n");
		printf("\t\t\t3.  Eliminar.\n");
		printf("\t\t\t4.  Buscar.\n");
		printf("\t\t\t5.  Comprar.\n");
		printf("\t\t\t6.  Vender.\n");
		printf("\t\t\t7.  Mostrar.\n");
		printf("\t\t\t8.  Salir.\n\n");
		printf("\nQue opcion desea realizar!!! [1-8]: ");
		cin >> op;
		system("CLS");
		switch (op)
		{
		case 1:
			cout << "-----INSERTAR CONTANDO-----" << endl;
			cout << "Ingrese la palabra" << endl;
			cin >> palabra;
			hash->insertarEnTablaHash(palabra);
			do
			{
				break;
				Hash<string[]>* hash = new Hash<string[]>;
				int op;
			} while (op != 0);

		case 2:
			cout << "-----BUSCAR-----" << endl;
			cout << "Ingrese la palabra" << endl;
			cin >> palabra;
			hash->buscar(palabra);
			break;

		case 3:
			cout << "-----Mostrar-----" << endl;
			hash->mostrarPalabras();
			break;

		case 4:
			cout << "-----Leer archivo-----" << endl;
			hash->leerArchivo();
			system("CLS");
			break;

		case 0:
			cout << "-----GRACIAS-----" << endl;
			break;
		}
	} while (op != 0);
	return 0;
}
