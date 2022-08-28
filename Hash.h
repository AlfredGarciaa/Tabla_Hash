#pragma once
#include <iostream>
#include "Lista8.h"
#include <math.h>
#include <fstream>
//Cambiamos el tamaño maximo
#define TAM 10000
using namespace std;

template <class T>
class Hash
{
private:
	Lista8<string>* tablaHash[TAM];

public:
	Hash()
	{
		for (int i = 0; i < TAM; i++)
		{
			this->tablaHash[i] = new Lista8<string>;
		}
	}

	int codigoAscii(char elem)
	{
		int i;
		i = elem;
		return i;
	}

	int obtenerPosicion(string palabra)
	{
		int pos = 0;
		for (int i = 0; i < palabra.length(); i++)
		{
			pos = pos + (palabra[i] * pow(2, i));
		}
		return pos % TAM;
	}

	void insertarEnTablaHash(string palabra)
	{
		int pos = obtenerPosicion(palabra);
		if (pos < 0)
		{
			pos = -1 * pos;
		}
		tablaHash[pos]->InsertarContando(palabra);
	}

	//No leera de momento
	/*void leerArchivo()
	{
		ifstream archivo("gabriel_garcia_marquez.txt");
		string palabra;
		while (!archivo.eof())
		{
			archivo >> palabra;
			insertarEnTablaHash(palabra);
		}
		archivo.close();
	}*/

	void mostrarPalabras()
	{
		for (int i = 0; i < TAM - 1; i++)
		{
			tablaHash[i]->mostrarLista();
		}
	}

	void buscar(string palabra)
	{
		if (tablaHash[obtenerPosicion(palabra)] != NULL)
		{
			if (tablaHash[obtenerPosicion(palabra)]->getPrimero() != NULL && tablaHash[obtenerPosicion(palabra)]->BuscarNoRecursivo(palabra))
			{
				tablaHash[obtenerPosicion(palabra)]->mostrarLista();
			}
		}
	}

	//Asignamos una funcion compra para los elementos enlazadas en la lista
	void compra(tipo e, int c) 
	{
		Nodo<tipo> *tmp = buscar(e);
		int pos = funcionHashResiduo(e);
		if (tmp != NULL) {
			tmp->setCant(tmp->getCant() + c);
		}
		else
		{
			insertarL8(e);
			vec[pos]->
		}
	}

	//Añadimos otra funcionalidad mas practica
	//la de multiplicar
	int funcionHashMultiplicacion(string s)
	{
		int mult, piso, fraccion, pos, tmp;
		tmp = 0;
		for (int i = 0; i < s.size(); i++) {
			tmp = tmp + (s[i] * 2 ^ i);
		}
		mult = (tmp * (sqrt(5) - 1) / 2);
		piso = floor(mult);
		fraccion = mult - floor;
		pos = floor(fraccion * capacidad);
		return pos;
	}
};