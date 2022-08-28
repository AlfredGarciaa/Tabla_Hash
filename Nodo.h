//Creamos nueva clase para direccionar nodos
#pragma once
#include<iostream>
using namespace std;
template<class tipo>

class Nodo
{
private:
	tipo valor;
	Nodo *sig;
	Nodo *ant;
	int cant;
	float precio;
public:
	Nodo() {
		sig = NULL;
		ant = NULL;
		cant = 0;
		precio = 0;
	}
    ~Nodo() {
        //
    }
};