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
		cout << "1.- Insertar Contando" << endl;
		cout << "2.- Buscar" << endl;
		cout << "3.- Mostrar" << endl;
		cout << "4.- Leer txt" << endl;
		cout << "0.- Salir" << endl;
		cout << "Ingrese una opcion" << endl;
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
